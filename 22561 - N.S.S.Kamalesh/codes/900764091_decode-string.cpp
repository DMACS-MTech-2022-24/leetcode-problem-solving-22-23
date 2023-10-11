class Solution {
public:
    int i=0;
    string decodeString(string s) {
        string s1="",s2;int c=0;
        for(;i<s.length();){
            if(s[i]==']'){
                i++;
                return s1;
            }
            while(i<s.length()&&s[i]>='0'&&s[i]<='9'){
                c=c*10+int(s[i])-'0';
                i++;
            }
            if(s[i]=='['){
                i++;
                s2=decodeString(s);
            }
            while(c--) s1=s1+s2;
            c=0;
            while(i<s.length()&&s[i]>='a'&&s[i]<='z'){
                s1.push_back(s[i]);
                i++;
            }
        }
        return s1;
    }
};