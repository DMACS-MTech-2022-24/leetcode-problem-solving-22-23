import requests
import pandas as pd
from datetime import datetime
import os
from pathlib import Path
import json
import re
from time import sleep

script_dir = Path( __file__ ).parent.absolute()

# First create a directory for yourself.
# create info.json file
'''
The program needs the info.json file in the current working directory and the following is the format.

{
  "timestamp": 0,
  "LEETCODE_SESSION": "LEETCODE_SESSION from browser cookies",
  "csrftoken": "csrftoken from browser cookies"
}
'''

# The LEETCODE_SESSION and csrftoken can be found by using a cookie editor extension on a browser.
# First login to leetcode if not already.
# Open leetcode.com
# Open cookie editor on the same tab
# Find LEETCODE_SESSION and csrftoken and fill it in the info.json file.
# The copied values of LEETCODE_SESSION and csrftoken must be within double quotes.

# From within your directory run
# python ../lc.py




problems_url='https://leetcode.com/problems/'

submission_url='https://leetcode.com/problems/{titleSlug}/submissions/{submissionId}/'

code_path="codes/"
if not os.path.exists(code_path):
   os.makedirs(code_path)

info_path="info.json"
if not os.path.exists(info_path):
  print('info.json does not exist')
  exit(1)

num_retries = 10
retry_wait=5

submissions_path="README.adoc"

note_replaces = {"\n":" +\n","|":"\|"}

def multiple_replace(dict, text):
  # Create a regular expression  from the dictionary keys
  regex = re.compile("(%s)" % "|".join(map(re.escape, dict.keys())))

  # For each match, look-up corresponding value in dictionary
  return regex.sub(lambda mo: dict[mo.string[mo.start():mo.end()]], text) 


colour_map = {"Easy":"green-background","Medium":"yellow-background","Hard":"red-background"}

session = requests.Session()
prv_timestamp=0

with open(info_path,"r") as f:
  info = json.load(f)
  session.cookies['LEETCODE_SESSION']=info['LEETCODE_SESSION']
  session.cookies['csrftoken']=info['csrftoken']
  prv_timestamp=info['timestamp']


graphql_url='https://leetcode.com/graphql/'
headers = {
    'Content-Type': 'application/json',
}


submissions_query="""
submissionList(
offset: {}
limit: {}
questionSlug: "")
{{
  hasNext
  submissions {{
    id
    timestamp
    statusDisplay
    title
    titleSlug
    lang
    notes
  }}
}}
"""


question_query="""
question_{}: question(titleSlug: "{}") {{
    questionFrontendId
    title 
    difficulty
    topicTags {{ name }}
  }}
"""

code_query="""
submissionDetails_{}:submissionDetails(submissionId: {}) {{
  code
}}
"""

def get_n_queries(query,args):
  nqueries=""
  i=0
  for x in args:
    nqueries += query.format(i,x)+","
    i+=1
  if nqueries!="":
    nqueries=nqueries[:-1]
  return nqueries
def get_submissions_query(offset,limit):
  return submissions_query.format(offset,limit)

def make_query(offset,limit,titleSlugs,submissionIds):
  query={"query":"{"+get_submissions_query(offset,limit)}
  if titleSlugs:
    query["query"]+=","+get_n_queries(question_query,titleSlugs)
  if submissionIds:
    query["query"]+=","+get_n_queries(code_query,submissionIds)
  query["query"]+="}"
  return query

def request_retry(query):
  for i in range(num_retries):
    response = session.post(graphql_url, headers=headers, json=query)
    if response.status_code==200:
      break
    print(response._content)
    print("Failed with code {} \n Retrying {} for submission list after {} seconds.".format(response.status_code,graphql_url,retry_wait))
    sleep(retry_wait)
  else:
    print("Retries failed")
    exit(2)
  return response.json()


upt_timestamp=prv_timestamp
offset=0
limit=10
hasNext=True
subs=[]
submissions_list=[]
accepted_submissions=0
cnt=0
titleSlugs=[]
submissionIds=[]
while hasNext or submissions_list:
  query=make_query(offset,limit,titleSlugs,submissionIds)
  flag=True
  while flag:
    data=request_retry(query)['data']
    
    for i in range(len(submissions_list)):
      cnt+=1
      print(cnt,"\t",submissions_list[i]["title"])
      submissions_list[i]['timestamp']=int(submissions_list[i]['timestamp'])
      upt_timestamp=max(upt_timestamp,submissions_list[i]['timestamp'])
      submissions_list[i]["date"]=datetime.fromtimestamp(submissions_list[i]['timestamp']).strftime("%d/%m/%Y")
      submissions_list[i]["tags"]=[topic['name'] for topic in data['question_'+str(i)]["topicTags"]]
      submissions_list[i]["difficulty"]=data['question_'+str(i)]["difficulty"]
      submissions_list[i]["questionId"]=data['question_'+str(i)]["questionFrontendId"]
      submissions_list[i]["notes"]=multiple_replace(note_replaces,submissions_list[i]["notes"])
      if data['submissionDetails_'+str(i)]==None:
        print('None found')
        continue
      with open(os.path.join(code_path,submissions_list[i]["id"]+"_"+submissions_list[i]['titleSlug']+"."+submissions_list[i]['lang']),"w") as f:
        f.write(data['submissionDetails_'+str(i)]['code'])
      subs += submissions_list
      break

  if not hasNext:
    break
  hasNext=data['submissionList']['hasNext']
  submissions_list=data['submissionList']['submissions']
  if int(submissions_list[-1]["timestamp"])<=prv_timestamp:
    hasNext=False
  
  submissions_list=[x for x in submissions_list if x["statusDisplay"]=="Accepted" and int(x["timestamp"])>prv_timestamp]
  offset+=limit

  titleSlugs=[x['titleSlug'] for x in submissions_list]
  submissionIds=[x['id'] for x in submissions_list]
  accepted_submissions+=len(submissions_list)

print(' Accepted submissions \t{}'.format(accepted_submissions))
subs.reverse()
isExist=os.path.exists(submissions_path)
with open(submissions_path,"a+") as f:
  if not isExist:
    f.write(
"""[cols="1,3,1,3,6"]
[options="header"]
|=========================================================
| Date | Title | Difficulty | Topics | Notes
""")
  for submission in subs:
    tags=''
    for tag in submission['tags']:
      if tags!='':
        tags+=' , '
      tags+=tag
    f.write("| {} | {}[{}.{}] | [.{}. {}]#*{}*# | {} | {}\n\n".format(submission['date'],
            submission_url.format(titleSlug=submission['titleSlug'],submissionId=submission["id"]),
            submission['title'],
            colour_map[submission['difficulty']],
            "black",
            submission['difficulty'],
            tags,submission['notes']))
info['timestamp']=upt_timestamp
with open(info_path,"w")as jsonFile:
  json.dump(info,jsonFile)