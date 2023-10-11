import requests
from datetime import datetime
import os
from pathlib import Path
import json
import re
from time import sleep
import pandas as pd
import argparse

parser = argparse.ArgumentParser()
excl_group = parser.add_mutually_exclusive_group(required=True)
excl_group.add_argument("--get","-g",action="store_true",help="Get new submissions from leetcode and rebuilds README file.")
excl_group.add_argument("--rebuild","-b",action="store_true",help="Rebuild readme file again from data file and rebuilds README file.")
excl_group.add_argument("--notes","-n",action="store_true",help="Fetches only the notes from leetcode and rebuilds README file.")
args=parser.parse_args()

# Check and apply multiple multiple replacements
def multiple_replace(dict, text):
  # Create a regular expression  from the dictionary keys
  regex = re.compile("(%s)" % "|".join(map(re.escape, dict.keys())))

  # For each match, look-up corresponding value in dictionary
  return regex.sub(lambda mo: dict[mo.string[mo.start():mo.end()]], text) 

# Check if the configuration file exists
info_path="info.json"
if not os.path.exists(info_path):
  print('info.json does not exist')
  exit(1)

# Load the configuration
with open(info_path,"r") as f:
  info = json.load(f)

base_path=info["reg"]+" - "+info["name"]
code_path=info["code_path"]
readme_path=info["readme_path"]
note_replaces = info["note_replaces"]
problems_url=info["problems_url"]
data_file=info["data_file"]
graphql_url=info["graphql_url"]
file_unicode_symbol=info["file_unicode_symbol"]
timestamp_file=info["timestamp_file"]
num_retries=info["num_retries"]
retry_wait=info["retry_wait"]
limit=info["limit"]
colour_map = info["colour_map"]

# Create base directory
if not os.path.exists(base_path):
  print("{} does not exist, creating ...".format(base_path))
  os.mkdir(base_path)

# Change current directory
print("Changing directory to '{}' ...".format(base_path))
os.chdir(base_path)

# Timestamp
if os.path.exists(timestamp_file):
  with open(timestamp_file,"r") as ts:
    prv_timestamp=int(ts.readline())
    print("Previous timestamp {}".format(prv_timestamp))
else:
  print("'{}' does not exists. Setting timestamp to 0.".format(timestamp_file))
  prv_timestamp=0


# Create the directory for code dump if it does not exists
if not os.path.exists(code_path):
  print("'{}' does not exist, creating ...".format(code_path))
  os.mkdir(code_path)

# Create a session and fill the cookies
session = requests.Session()
session.cookies['LEETCODE_SESSION']=info['LEETCODE_SESSION']
session.cookies['csrftoken']=info['csrftoken']

# The headers and Queries
headers = {
    'Content-Type': 'application/json',
}

# Query for getting the submission list.
data_submission_id={'query':"""
query submissionList($offset: Int!, $limit: Int!, $questionSlug: String!) {
     submissionList(
    offset: $offset
    limit: $limit
    questionSlug: $questionSlug
  ) {
    hasNext
    submissions {
      id
      timestamp
      statusDisplay
      titleSlug
      lang
      notes
    }
  }
}
""",'variables':{'offset':0,'limit':limit,'questionSlug':""}}

# Query for getting information about the question.
Q_title={"query":"""
query ($titleSlug: String!) {
    question(titleSlug: $titleSlug) {
        questionFrontendId
        title 
        difficulty
        topicTags {
            name
        }
      }
  }
""",'variables':{'titleSlug':"two-sum"}}

# Query to get the submitted code.
data_sumbission_info={'query':"""
query submissionDetails($submissionId: Int!) {
  submissionDetails(submissionId: $submissionId) {
    code
  }
}
""",'variables':{"submissionId": 1022704592}}

# Query to get only the notes.
notes_only_query={'query':"""
query submissionDetails($submissionId: Int!) {
  submissionDetails(submissionId: $submissionId) {
    notes
  }
}
""",'variables':{"submissionId": 1022704592}}

def retry_post(query,name):
  global num_retries
  global retry_wait
  global graphql_url
  global headers
  for i in range(num_retries):
    response = session.post(graphql_url, headers=headers, json=query)
    if response.status_code==200:
      data=response.json()
      if data['data'][name]==None:
        print("{} was none\n Retrying {} for submission list after {} seconds.".format(name,graphql_url,retry_wait))
      else:
        return data['data'][name]
    else:
      print("Failed with code {} \n Retrying {} for submission list after {} seconds.".format(response.status_code,graphql_url,retry_wait))
    sleep(retry_wait)
  else:
    print("Retries failed")
    exit(2)

if args.get:
  upt_timestamp=prv_timestamp
  offset=0
  hasNext=True
  subs=[]
  total_submissions=0
  accepted_submissions=0
  while hasNext:
    data_submission_id['variables']['offset']=offset
    data=retry_post(data_submission_id,"submissionList")
    hasNext=data['hasNext']
    submissions_data=data['submissions']
    offset+=limit
    for x in submissions_data:
      x['timestamp']=int(x['timestamp'])
      upt_timestamp=max(upt_timestamp,x['timestamp'])
      if x['timestamp']<=prv_timestamp:
        hasNext=False
        break
      row=dict()
      total_submissions+=1
      if x['statusDisplay']!='Accepted':
        continue
      accepted_submissions+=1
      Q_title['variables']['titleSlug']=x['titleSlug']
      
      Q_title_data=retry_post(Q_title,"question")

      Q_title_data['topicTags']=[topic['name'] for topic in Q_title_data['topicTags']]
      data_sumbission_info['variables']['submissionId']=x['id']
      
      submission_details=retry_post(data_sumbission_info,"submissionDetails")

      row['timestamp']=x['timestamp']
      row['date']=datetime.fromtimestamp(row['timestamp']).strftime("%d/%m/%Y")
      row['submissionId']=x['id']
      row['questionId']=Q_title_data['questionFrontendId']
      row['title']=Q_title_data['title']
      row['titleSlug']=x['titleSlug']
      row['difficulty']=Q_title_data['difficulty']
      row['tags']=" , ".join(Q_title_data['topicTags'])
      row['notes']=multiple_replace(note_replaces,x['notes'])
      row['codePath']=os.path.join(code_path,x['id']+"_"+x['titleSlug']+"."+x['lang'])

      print(accepted_submissions,"\t",row['title'])
      with open(row['codePath'],"w") as f:
          f.write(submission_details['code'])
      subs.append(row)
  print(' New Submissions \t{} \n Accepted submissions \t{}'.format(total_submissions,accepted_submissions))


  if os.path.exists(data_file):
    print("'{}' exists. Loading ...".format(data_file))
    old_df=pd.read_pickle(data_file)
  else:
    old_df=pd.DataFrame({c: pd.Series(dtype=t) for c, t in {
          'timestamp': 'int64',
          'date': 'str',
          'submissionId': 'int64',
          'questionId': 'int64',
          'title': 'str',
          'titleSlug': 'str',
          'difficulty': 'str',
          'tags': 'str',
          'notes': 'str',
          'codePath': 'str'
      }.items()
      })
  if len(subs)>0:
    print("Dumping pandas dataframe into  '{}'".format(data_file))
    df=pd.concat([pd.DataFrame(subs),old_df], ignore_index=True)
    df.to_pickle(data_file)
  else:
    df=old_df
    print("No new accepted submissions")
  
  with open(timestamp_file,"w") as ts:
    print("Wrting latest timestamp to '{}'.".format(timestamp_file))
    ts.write(str(upt_timestamp))


if args.notes:
  if os.path.exists(data_file):
    print("'{}' exists. Loading ...".format(data_file))
    df=pd.read_pickle(data_file)
    i=0
    for _,row in df.iterrows():
      i+=1
      notes_only_query['variables']['submissionId']=row['submissionId']
      data=retry_post(notes_only_query,"submissionDetails")

      data['notes']=multiple_replace(note_replaces,data['notes'])

      if row['notes']!=data['notes']:
        print('{} \t Updated'.format(i),end="\t")
        row['notes']=data['notes']
      print("\t {} ".format(row['title']))

    print("Dumping pandas dataframe into  '{}'".format(data_file))
    df.to_pickle(data_file)
  else:
    print("'{}' does not exists. Nothing to do.".format(data_file))
    exit(0)

print('\n\n Generating "{}" file'.format(readme_path))

with open(readme_path,"w") as f:
  f.write("= "+base_path+"""
  
[cols="1,3,1,3,6"]
[options="header"]
|=========================================================
| Date | Title | Difficulty | Topics | Notes
    """)
  for _,row in df.iterrows():
    f.write("| {} | link:{}[{}] {}{}[{}.{}] | [.{}. {}]#*{}*# | {} | {}".format(row['date'],
            row['codePath'],
            file_unicode_symbol,
            problems_url,
            row['titleSlug'],
            row['questionId'],
            row['title'],
            colour_map[row['difficulty']],
            "black",
            row['difficulty'],
            row['tags'],
            row['notes']))