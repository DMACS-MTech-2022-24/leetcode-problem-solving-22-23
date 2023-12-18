class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,bool> M;
        for(const auto &e:paths)
        {
            M[e[0]]=true;
        }

        for(const auto &e:paths)
        {
            if(not M[e[1]])
            {
                return e[1];
            }
        }
        return "";
    }
};