class Solution {
public:
    int dp[300][300];
    void init_dp()
    {
        for(int i = 0; i < 300; i++){
            for(int j = 0; j < 300; j++){
                dp[i][j] = -1;
            }
        }
    }
    int comb(int n, int r)
    {
        if(dp[n][r] != -1)
            return dp[n][r];
        
        if(r == 0 || n - r == 0)
            return 1;
        
        return dp[n][r] = comb(n - 1, r - 1) + comb(n - 1, r);
        
    }
    long long int uniquePaths(int m, int n) {
        init_dp();
        long long int ans = comb(m + n - 2, n - 1);
        return ans;   
    }
};