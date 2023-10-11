#include<bits/stdc++.h>


class Solution {
public:
    bool isPalindrome(int x) {
        stringstream ss;

        ss << x;
        string s;
        ss >> s;
        int n = s.size();
        for(int i = 0; i < n/2; i++){
            if(s[i] != s[n - 1 - i]){
                return false;
            }
        }

        return true;
    }
};