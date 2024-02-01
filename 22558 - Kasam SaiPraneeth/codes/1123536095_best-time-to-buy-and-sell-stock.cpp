class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int min = prices[0];
        int maxprofit = 0;
        // Iterates through the vector, at each finds the min and upadted, 
        // otherwise update the maxprofit using the previous maxprofit and the
        // current prices-min(till this ith iteration) 
        for(int i = 1 ; i<n ;i++){
            if(prices[i] < min)
                min = prices[i];
            else{
                maxprofit = max(maxprofit, prices[i] - min);
            }
        }
        // returns the maxprofit in the given vector
        return maxprofit;

    }
};