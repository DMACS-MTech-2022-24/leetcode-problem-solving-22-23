class Solution {
public:
    int tribonacci(int n) {
     if(n == 0) return n;
     if(n==1 || n==2) return 1;
     // dynamic programming
     // create a vector of size n+1 with zeros
     // storing the base cases in the vecotr. Enters the loop only if the n is greater then 2
     vector<int>dp(n+1, 0);
     dp[0] = 0;
     dp[1] = 1;
     dp[2] = 1;
     for(int i = 3; i<=n ; i++){
        dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
     } 
     return dp[n];
    }
};