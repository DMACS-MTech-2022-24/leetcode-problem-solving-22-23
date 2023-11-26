class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0], sell=0;
        int&& size = prices.size();
        if(size<=1) return 0;
        for(int i=1; i<size; i++){
            buy=min(buy,prices[i]);
            sell=max(sell,prices[i]-buy);
        }
        return sell;
    }
};