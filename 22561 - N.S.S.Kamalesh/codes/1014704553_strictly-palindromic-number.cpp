class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        if(n%2==0) return false;
        for(int i=2,j,f,b;i<=n-2;++i){
            j=n;
            string s="";
            while(j){
                s.push_back(j%i);
                j/=i;
            }
            f=0;b=s.size()-1;
            while(f<b){
                if(s[f]!=s[b]) return false;
                ++f;--b;
            }
        }
        return true;
    }
};