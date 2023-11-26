class Solution {
public:
    int gcd(int a,int b){
        return b==0?a:gcd(b,a%b);   
    }
    string gcdOfStrings(string str1, string str2) {
        int g=gcd(str1.size(),str2.size());
        string s=str1.substr(0,g),s1="";
        int i1=str1.size()/g,i2=str2.size()/g;
        for(int i=1;i<=i1;i++)
            s1+=s;
        if(str1!=s1)
            return "";
        s1="";
        for(int i=1;i<=i2;i++)
            s1+=s;
        if(str2!=s1)
            return "";
        return s;
    }
};