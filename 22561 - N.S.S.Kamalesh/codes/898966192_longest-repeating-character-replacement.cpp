class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> m;
        int tmp=0, j=0, mx=0;
        for(int i=0;i<s.size();i++){
            ++m[s[i]];
            mx=max(mx,m[s[i]]);
            if(i-j+1-mx>k)
                --m[s[j++]];
            tmp=max(tmp,i-j+1);
        }
        return tmp;
    }
};