class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int n = s.length()-1;
        int a =0;
        
        while(a<n)
            {
                if(s[a++]!=s[n--])
                    return false;
            }
        return true;
    }
};