class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        const int m=grid.size(),n=grid[0].size();
        vector<vector<int>> G(m,vector<int>(n,0));
        vector<int> R(m,0),C(n,0);
        for(int i=0;i<m;++i)
        {
            for(int j=0;j<n;++j)
            {
                R[i]+= (grid[i][j]<<1)-1;
                C[j]+= (grid[i][j]<<1)-1;
            }
        }
        for(int i=0;i<m;++i)
        {
            for(int j=0;j<n;++j)
            {
                G[i][j]=R[i]+C[j];
            }
        }
        return G;
    }
};