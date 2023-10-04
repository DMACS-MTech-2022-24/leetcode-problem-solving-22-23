class Solution {
public:
    string reverseWords(string s) {
        int i=0,j=0;
        while(s[i]==' ')++i;
        j=i+1;
        string out;
        while(j<s.size())
        {
            if(s[j++]==' ')
            {
                if(j-i>1)
                    out.insert(0,s,i,j-i);
                i=j;
            }
        }
        if(i!=j)
        {
            out.insert(0," ");
            out.insert(0,s,i,j-i);
        }
        if(out.back()==' ')
            out.pop_back();
        return out;
    }
};