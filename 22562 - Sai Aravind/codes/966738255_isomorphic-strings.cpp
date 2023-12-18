class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int S[127]={0},T[127]={0};
        for(int i=0;i<s.size();++i)
        {
            if(S[s[i]]!=T[t[i]])
            {
                return false;   
            }
            S[s[i]]=i+1;
            T[t[i]]=i+1;
        }
        return true;
    }
};