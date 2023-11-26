class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(s.length()<p.length())
            return vector<int>();
        vector<int>m1(26,0),m2(26,0);
        vector<int>v;
        for(char c:p)
            ++m1[c-'a'];
        int i,j=0;
        for(i=0;i<p.length();i++)
            ++m2[s[i]-'a'];
        if(m1==m2)
            v.push_back(j);
        for(;i<s.length();){
            --m2[s[j]-'a'];
            ++m2[s[i]-'a'];
            ++j;++i;
            if(m1==m2)
                v.push_back(j);
        }
        return v;
    }
};