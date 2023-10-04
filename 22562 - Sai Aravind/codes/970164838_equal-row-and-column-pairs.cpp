class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int nums=0;
        for(int i=0;i<grid.size();++i)
        {
            for(int j=0;j<grid.size();++j)
            {
                int k=0;
                for(k=0;k<grid.size() and grid[i][k]==grid[k][j];++k);
                nums+=(k==grid.size());
            }
        }
        return nums;
    }
};