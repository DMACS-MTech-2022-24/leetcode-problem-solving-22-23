class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int I=0,J=0;
        int i=0,j=0;
        
        while(I<word1.size() and J<word2.size())
        {
            const auto &x=word1[I],&y=word2[J];
            while(i<x.size() and j<y.size())
            {
                if(x[i++]!=y[j++])
                    return false;
            }
            I+=(i==x.size());
            J+=(j==y.size());
            i%=x.size();
            j%=y.size();
        }
        return I==word1.size() and J==word2.size() and i==0 and j==0;
    }
};