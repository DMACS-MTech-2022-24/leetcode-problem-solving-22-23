

bool isAnagram(char * s, char * t){
  int buckets[26]={0},i=0;
  for(;s[i]!='\0' && t[i]!='\0';++i)
  {
    ++buckets[s[i]-'a'];
    --buckets[t[i]-'a'];
  }
  if(s[i]!='\0' || t[i]!='\0')
    return false;
  for(i=0;i<26;++i)
  {
    if(buckets[i]!=0)
      return false;
  }
  return true;
}