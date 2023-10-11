class Solution {
public:
    int dp(int m,int n){
        int g[m][n];
        for(int i=0;i<m;i++)
            g[i][0]=1;
        for(int j=0;j<n;j++)
            g[0][j]=1;
        for(int i=1,j;i<m;i++)
            for(j=1;j<n;j++)
                g[i][j]=g[i-1][j]+g[i][j-1];
        return g[m-1][n-1];
    }
    int uniquePaths(int m, int n) {
        return dp(m,n);
    }
};