class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string tmp;size_t p;int l=0,m=0;
        for(int i=0;i<s.size();i++){
            p=tmp.find(s[i]);
            if(p==string::npos)
                tmp.push_back(s[i]);
            else{
                l=tmp.size();
                if(m<l) m=l;
                tmp=tmp.substr(p+1);
                tmp.push_back(s[i]);
                l=tmp.size();
            }
        }
        if(m<tmp.size()) m=tmp.size();
        return m;
    }
};