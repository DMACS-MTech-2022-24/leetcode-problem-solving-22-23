class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.size()-1,j=i;
        while(i>=0&&s[i]==' '){
            --j;
            --i;
        }
        while(i>=0&&s[i]!=' ') --i;
        return j-i;
    }
};