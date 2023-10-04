class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        for(int i=0;;++i)
        {
            int j=0;
            for(;j<strs.size() and i<strs[j].size() and strs[j][i]==strs[0][i];++j);
            if(j!=strs.size())
                return strs[0].substr(0,i);
        }
    }
};