class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int p=0,q=0;
        auto i=s.rbegin(),j=t.rbegin();
        while(true)
        {
            while(i!=s.rend())
            {
                if(*i=='#')
                    ++p;
                else if(p>0)
                    --p;
                else
                    break;
                ++i;
            }
            while(j!=t.rend())
            {
                if(*j=='#')
                    ++q;
                else if(q>0)
                    --q;
                else
                    break;
                ++j;
            }
            if(i==s.rend() and j==t.rend())
                return true;
            if((i!=s.rend()) != (j!=t.rend()))
                return false;
            if(*i!=*j)
            {
                return false;
            }
            ++i;++j;
        }
        
        
        
    }
};