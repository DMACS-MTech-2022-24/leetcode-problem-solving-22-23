class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        // creating a dp vector of size amount+1, with intial val of INT_Max
        vector<int> dp(amount + 1, INT_MAX);
        // Base case
        dp[0] = 0;

        // iterates over each amount from 1 to the target amount
        for (int i = 1; i <= amount; i++) {
            // iterates overs coins
            for (int it : coins) {
                //checking if each coins contributes to making change for current the amount
                if (i - it >= 0 && dp[i - it] != INT_MAX)
                    dp[i] = min(dp[i], dp[i - it] + 1);
            }
        }
        // returns -1 if no valid combination exits
        return (dp[amount] == INT_MAX) ? -1 : dp[amount];
    }
};