class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int p=0,q=0;
        auto i=s.rbegin(),j=t.rbegin();
        while(i!=s.rend() and j!=t.rend())
        {
            if(*i=='#')
            {
                ++p;
                ++i;
            }
            else if(*j=='#')
            {
                ++q;
                ++j;
            }
            else if(p!=0)
            {
                --p;
                ++i;
            }
            else if(q!=0)
            {
                --q;
                ++j;
            }
            else if(*i!=*j)
            {
                return false;
            }
            else
            {
                ++i;++j;
            }
        }
        
        while(i!=s.rend() and (p>0 or *i=='#'))
        {
            if(*i=='#')
                ++p;
            else
                --p;
            ++i;
        }
        while(j!=t.rend() and (q>0 or *j=='#'))
        {
            if(*j=='#')
                ++q;
            else
                --q;
            ++j;
        }
        return i==s.rend() and j==t.rend();
    }
};