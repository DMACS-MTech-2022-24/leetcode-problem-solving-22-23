

char findTheDifference(char * s, char * t){
    int bucket[26]={0};
    register int i;
    for(i=0;s[i]!='\0';++i)
    {
        ++bucket[s[i]-'a'];
        --bucket[t[i]-'a'];
    }
    --bucket[t[i]-'a'];
    for(i=0;i<26;++i)
    {
        if(bucket[i])
            return 'a'+i;
    }
    return ' ';
}