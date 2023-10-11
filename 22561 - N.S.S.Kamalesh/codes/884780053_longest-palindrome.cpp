class Solution {
public:
    int longestPalindrome(string s) {
        int c=0,tmp=0;
        unordered_map<char,int>m;
        for(char c:s){
            ++m[c];
        }
        for(auto i:m){
            if(i.second%2==0)
                c+=i.second;
            else{
                c+=i.second-1;
                tmp=1;
            }
        }
        if(tmp==1)
            return c+1;
        return c;
    }
};