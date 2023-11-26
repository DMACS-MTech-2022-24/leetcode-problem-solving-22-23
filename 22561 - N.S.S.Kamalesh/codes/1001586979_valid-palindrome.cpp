class Solution {
public:
    bool isPalindrome(string s) {
        for(int i=0,j=s.length()-1;i<j;){
            if(isalnum(s[i])){
                if(isalnum(s[j])){
                    if(tolower(s[i])!=tolower(s[j]))
                        return false;
                    else{
                        ++i;--j;
                    }
                }
                else --j;
            }
            else ++i;
        }
        return true;
    }
};