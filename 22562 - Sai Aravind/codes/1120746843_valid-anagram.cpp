class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> C(26,0);
        int cnt=0;
        for(const auto &x:s)
        {
            C[x-'a']++;
            cnt+=x-'a';
        }
        for(const auto &x:t)
        {
            C[x-'a']--;
            cnt-=x-'a';
        }
        if(cnt!=0)
            return false;
        for(const auto &x:C)
        {
            if(x!=0)
                return false;
        }
        return true;
    }
};