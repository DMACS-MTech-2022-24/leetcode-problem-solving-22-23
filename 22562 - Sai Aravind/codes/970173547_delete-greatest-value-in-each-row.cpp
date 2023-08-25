class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int out=0;
        while(grid[0].size()>0)
        {
            int MX=0;
            for(auto& row:grid)
            {
                auto mx=max_element(row.begin(),row.end());
                if(*mx>MX)
                    MX=*mx;
                row.erase(mx);
            }
            out+=MX;
        }
        return out;
    }
};