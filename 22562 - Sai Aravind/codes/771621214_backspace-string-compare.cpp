class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int s_hash_cntr=0,t_hash_cntr=0;
        auto s_rev_itr=s.rbegin(),t_rev_itr=t.rbegin();
        while(true)
        {
            while(s_rev_itr!=s.rend())
            {
                if(*s_rev_itr=='#')
                    ++s_hash_cntr;
                else if(s_hash_cntr>0)
                    --s_hash_cntr;
                else
                    break;
                ++s_rev_itr;
            }
            while(t_rev_itr!=t.rend())
            {
                if(*t_rev_itr=='#')
                    ++t_hash_cntr;
                else if(t_hash_cntr>0)
                    --t_hash_cntr;
                else
                    break;
                ++t_rev_itr;
            }
            if(s_rev_itr==s.rend() and t_rev_itr==t.rend())
                return true;
            if((s_rev_itr!=s.rend()) != (t_rev_itr!=t.rend()))
                return false;
            if(*s_rev_itr!=*t_rev_itr)
            {
                return false;
            }
            ++s_rev_itr;
            ++t_rev_itr;
        }
    }
};