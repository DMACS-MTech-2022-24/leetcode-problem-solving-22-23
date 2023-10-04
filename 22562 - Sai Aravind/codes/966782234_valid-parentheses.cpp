class Solution {
    const map<char,char> mp={{')','('},{'}','{'},{']','['}};
public:
    bool isValid(string s) {
        for(auto it=s.begin();it!=s.end();)
        {
            auto jt=mp.find(*it);
            if(jt!=mp.end())
            {
                if(it==s.begin() or jt->second!=*(it-1))
                    return false;
                else
                {
                    it=s.erase(it-1,it+1);
                    continue;
                }
            }
            ++it;
        }
        return s.size()==0;
    }
};