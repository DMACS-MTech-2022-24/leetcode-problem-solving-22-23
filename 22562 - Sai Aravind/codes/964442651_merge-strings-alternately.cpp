class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        auto it1=word1.begin();
        auto it2=word2.begin();
        bool flag=false;
        string out_str;
        while(it1!=word1.end() and it2!=word2.end())
        {
            out_str.push_back(*it1++);
            auto tmp=it1;
            it1=it2;
            it2=tmp;
            flag = not flag;
        }
        if(flag)
        {
            out_str.append(it2,word1.end());
            out_str.append(it1,word2.end());
        }
        else
        {
            out_str.append(it1,word1.end());
            out_str.append(it2,word2.end());
        }
        return out_str;
    }
};