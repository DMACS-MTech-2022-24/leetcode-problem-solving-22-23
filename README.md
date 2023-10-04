# leetcode-problem-solving-22-23
II MTech 2023-24 leetcode problem's solution

```bash
# Without angle brakets
mkdir <reg_no>-<name>
cd <reg_no>-<name>
# Now create the info.json file and fill it with things described below.
python ../lc_old.py
```

First create `info.json` file

The program needs the `info.json` file in the current working directory.
Create this file.
```json
{
  "timestamp": 0,
  "LEETCODE_SESSION": "LEETCODE_SESSION from browser cookies",
  "csrftoken": "csrftoken from browser cookies"
}
```
The LEETCODE_SESSION and csrftoken can be found by using a cookie editor extension on a browser. \
Use it when opening the leetcode.com after login. \
This cookie editor will give the LEETCODE_SESSION and csrftoken values. \
These values must be put in the `info.json` file and must be enclosed with double quotes.

Here is an example `info.json` file.
```json
{
  "timestamp": 0,
  "LEETCODE_SESSION": "eyJ0eYAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJfYXV0aF91c2VyX2lkIjoiNDT3NzZzNCIsIl9hdXRoX3VzZXJfYmFja2VuZCI6ImFsbGF1dGguYWNjb3VudC5hdXRoX2JhY1tlbmRzLkF1dGhlbnRpY2F0aW9uQmFja2VuZCIsIl9hdXRoX3VzZXJfaGFzaCI6Ijg0YTgyMrg1Mzk3ZWE1NjAwZGVjNWJlNzBmYjZhMGZhOWJhY2E4NTUiLCJpZCI6NDY3NzMzNCwiZW1haWwiOiJzYWlhcmF2aW5kLnN2QGdtYWlsLmNvbSIsInVzZXJuYW1lIjoiYXJhdjEyaW5kIiwidXNpcl9zbHVnIjoiYXJhdjEyaW5kIiwiYXZhdGFyIjoiaHR0cHM6Ly9hc3NldHMubGVldGNvZGUuY29tL3VzZXJzL2FyYXYxMmluZC9hdmF0YXJfMTYyNzkxMDk0Mi5wbmciLCJyZWZyZXNoqohfYXQiOjE2OTYzOTc2OTgsImlwIjoiMTQuMTM5Ljg2LjU0IiwiaWRlbnRpdHkiOiI2ZDc5N2EzZDIxZWIzMGMzYWYwNThhYjNhMmJmNTYyZCIsInNlc3Npb25faWQiOjQ1MDQzODcyfQ.oF6DWNUmPpZhQNJ939fF9og0FOlwyFbJT-zCukWksFo",
  "csrftoken": "yYUukQCy1O2CnjwOVKkfyjBOobsTs619AqXu9XdRgE4TpLhvGhwg3nIi8IouXO74"
}
```

If ever there is any error saying "None value non-subcriptable", refresh the LEETCODE_SESSION and csrftoken values by again getting those values from the brwoser's cookie editor extension.