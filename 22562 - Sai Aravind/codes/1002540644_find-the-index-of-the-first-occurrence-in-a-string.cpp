class Solution {
public:
    int strStr(string haystack, string needle) {
        vector<int> nxt(needle.size());
        for(int i=0,j=1;j<needle.size();)
        {
            if(needle[i]==needle[j])
                nxt[j++]=++i;
            else if(i!=0)
            {
                i=nxt[i-1];
            }
            else
            {
                nxt[j++]=0;
            }
        }
        int j=0;
        for(int i=0;i<haystack.size();)
        {
            if(haystack[i]==needle[j])
            {
                ++i;
                if(++j==needle.size())
                {
                    return i-j;
                }
            }
            else
            {
                if(j!=0)
                    j=nxt[j-1];
                else
                    ++i;
            }
        }
        return -1;
    }
};