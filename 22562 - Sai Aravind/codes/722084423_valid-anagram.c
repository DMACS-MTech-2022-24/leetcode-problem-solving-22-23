

bool isAnagram(char * s, char * t){
  int buckets[26]={0};
  char *i,*j;
  for(i=s,j=t;*i!='\0' && *j!='\0';++i,++j)
  {
    if(*i!=*j)
    {
      ++buckets[*i-'a'];
      --buckets[*j-'a'];
    }
  }
  if(*i!='\0' || *j!='\0')
    return false;
  for(int i=0;i<26;++i)
  {
    if(buckets[i]!=0)
      return false;
  }
  return true;
}