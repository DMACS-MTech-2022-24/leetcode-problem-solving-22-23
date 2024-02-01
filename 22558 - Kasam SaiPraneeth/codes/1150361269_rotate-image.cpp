class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        //first swaping the rows of the given matrix
        for (int i = 0; i < row/2; i++) {
            swap(matrix[i], matrix[row-i-1]);
        }
        // then swaping the i,j and j,i elements in the matrix
        for (int i = 0; i < row; i++) {
            for (int j = 0; j <= i; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
};