class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> bkts;
        int min=s.length();
        for(int i=0;i<s.length();++i)
        {
            
            if(bkts.find(s[i])==bkts.end())
            {
                bkts[s[i]]=i;
            }
            else
            {
                bkts[s[i]]=-1;
            }
        }
        for(auto it=bkts.begin();it!=bkts.end();++it)
        {
            if(it->second>=0 and min>it->second)
                min=it->second;
        }
        return min==s.length()?-1:min;
    }
};