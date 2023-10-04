class Solution {
public:
    string reverseVowels(string s) {
        int i=0,j=s.size()-1;
        while(i<j)
        {
            if(s[i]!='a' and s[i]!='e' and s[i]!='i' and s[i]!='o' and s[i]!='u' and s[i]!='A' and s[i]!='E' and s[i]!='I' and s[i]!='O' and s[i]!='U')
            {
                ++i;
            }
            else if(s[j]!='a' and s[j]!='e' and s[j]!='i' and s[j]!='o' and s[j]!='u' and s[j]!='A' and s[j]!='E' and s[j]!='I' and s[j]!='O' and s[j]!='U')
            {
                --j;
            }
            else
            {
                auto tmp=s[i];
                s[i]=s[j];
                s[j]=tmp;
                ++i;
                --j;
            }
        }
        return s;
    }
};