class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> S;
        for(const auto &e:paths)
        {
            S.insert(e[0]);
        }

        for(const auto &e:paths)
        {
            if(S.find(e[1])==S.end())
            {
                return e[1];
            }
        }
        return "";
    }
};