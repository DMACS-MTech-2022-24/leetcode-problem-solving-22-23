class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int i,j,t,n = matrix.size();
        vector<int> tmp;
        t= n-1;
        for(i=0;i<n/2;++i)
        {
            swap(matrix[i],matrix[t-i]);
        }
        for(i=1;i<n;++i)
        {
            for(j=0;j<i;++j)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
    }
};