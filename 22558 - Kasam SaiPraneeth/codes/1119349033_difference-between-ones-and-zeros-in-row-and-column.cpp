class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<int> onesRow(m,0);
        vector<int> onesCol(n,0);
        vector<int> zerosRow(m,0);
        vector<int> zerosCol(n,0);

        for(int i =0 ; i<m ; i++){
            for(int j =0 ; j<n ; j++){
                if(grid[i][j] == 0){
                    zerosRow[i] += 1;
                    zerosCol[j] += 1;
                }
                else{
                    onesRow[i] += 1;
                    onesCol[j] += 1;
                }
            }
        }
        vector<vector<int>> diff(m, vector<int>(n));
        for(int i =0 ; i<m ; i++){
            for(int j =0 ; j<n ; j++){
                diff[i][j] = onesRow[i]+onesCol[j] - zerosRow[i] - zerosCol[j];
            }
        }
        return diff;

    }
};