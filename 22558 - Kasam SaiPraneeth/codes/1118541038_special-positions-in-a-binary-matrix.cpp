class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        vector<int> row(n,0);
        vector<int> col(m,0);
        //calculating the row and column sum
        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<m ; j++){
                row[i] += mat[i][j];
                col[j] += mat[i][j];
            }
           
        }
        // if mat[i][j] ==1 then checking if both row and column sum is 1,if yes then count
        int count = 0;
         for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<m ; j++){
                if(mat[i][j] == 1){
                    if(row[i] == 1 && col[j] == 1){
                        count++;
                    }
                }
            }
        }
        //then return the total specail positions in the matrix
        return count;
    }
};