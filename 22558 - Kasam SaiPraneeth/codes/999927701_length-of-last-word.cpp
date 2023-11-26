class Solution {
public:
    int lengthOfLastWord(string s) {
        int n =s.size();
        int t = n-1;

        //finding the index of the last non-space character
        while(t>0 && s[t]==' ')
            --t;
        int i;
        i=t;

        // calulating the lenght of the last word
        while(i>=0 && s[i]!=' ')
            --i;
            
        return(t-i); // length of the last word
    }
};
