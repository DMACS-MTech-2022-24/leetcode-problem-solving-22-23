class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int> M;
        for(const auto &e:paths)
        {
            M[e[0]]=1;
        }

        for(const auto &e:paths)
        {
            if(M[e[1]]==0)
            {
                return e[1];
            }
        }
        return "";
    }
};