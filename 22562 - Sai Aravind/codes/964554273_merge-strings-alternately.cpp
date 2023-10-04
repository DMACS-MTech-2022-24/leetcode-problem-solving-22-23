class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int idx1=1,idx2=0;
        if(word1.size()<word2.size())
        {
            word1.swap(word2);
            idx1=0;
        }
        
        for(;idx2<word2.size();idx1+=2,++idx2)
        {
            word1.insert(idx1,1,word2[idx2]);
            cout<<word1<<"\n";
        }
        return word1;
    }
};