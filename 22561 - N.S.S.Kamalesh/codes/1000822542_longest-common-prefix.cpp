class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string tmp="";
        if(strs.size()==1)return strs[0];
        for(auto i:strs)
            if(i=="")return "";
        for(int i=0,j;i<strs[0].size();i++){
            for(j=1;j<strs.size();j++)
                if(strs[0][i]!=strs[j][i])break;
            if(j==strs.size())
                tmp.push_back(strs[0][i]);
            else break;
        }
        return tmp;
    }
};