class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length(),ln=0;
        while(s[--i]==' '){}
        
        while(i!=-1 && s[i--]!=' '){++ln;}
        return ln;
        
    }
};