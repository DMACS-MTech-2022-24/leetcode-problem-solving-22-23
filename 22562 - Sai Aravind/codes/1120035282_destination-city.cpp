class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int> M;
        for(const auto &e:paths)
        {
            --M[e[0]];
            ++M[e[1]];
        }
        for(const auto &[D,I]:M)
        {
            if(I==1)
            {
                return D;
            }
        }
        return "";
    }
};