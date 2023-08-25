class Solution {
public:
    int lengthOfLastWord(string s) {
        int ln=0;
        for(auto it=s.rbegin();it!=s.rend();++it)   
        {
            if(*it!=' ')
                ++ln;
            else if(ln>0)
                return ln;
        }
        return ln;
    }
};