class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> S,T;
        for(int i=0;i<s.size();++i)
        {
            auto s1=S.insert({s[i],t[i]});
            auto t1=T.insert({t[i],s[i]});
            if(s1.first->second!=t[i] or t1.first->second!=s[i])
            {
                return false;
            }
        }
        return true;
    }
};