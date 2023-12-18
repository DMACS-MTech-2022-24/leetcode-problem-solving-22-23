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
            if(i==x.size())
            {
                i=0;
                ++I;
            }
            if(j==y.size())
            {
                j=0;
                ++J;
            }
        }
        return I==word1.size() and J==word2.size() and i==0 and j==0;
    }
};