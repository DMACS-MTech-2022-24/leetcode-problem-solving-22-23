class Solution {
public:
    string toLowerCase(string s) {
        int n=s.length();
        for(int i = 0; i<n; i++){
            s[i] = tolower(s[i]);
            }
        return s;
    }
};