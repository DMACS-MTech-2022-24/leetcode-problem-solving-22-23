class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int,vector<int>> M;
        vector<vector<int>> out;
        for(int i=0;i<groupSizes.size();++i)
        {
            M[groupSizes[i]].push_back(i);
            if(M[groupSizes[i]].size()==groupSizes[i])
            {
                out.push_back(M[groupSizes[i]]);
                M[groupSizes[i]].clear();
            }
        }
        return out;
    }
};