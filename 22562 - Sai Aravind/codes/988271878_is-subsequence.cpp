class Solution {
public:
    bool isSubsequence(string s, string t) {
        auto i=0;
        for(auto const& x:t)
        {
            i+=int(s[i]==x);
        }
        return i==s.size();
    }
};