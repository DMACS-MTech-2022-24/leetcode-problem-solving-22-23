class Solution {
public:
    int minOperationsMaxProfit(vector<int>& customers, int boardingCost, int runningCost) {
        int B=0,W=0,R=0,i=0;
        int optimal_profit=INT_MIN,optimal_num=-1;
        while(true)
        {
            if(i<customers.size())
            {
                W+=customers[i++];
            }
            else if(W==0)
            {
                return optimal_profit>0?optimal_num:-1;
            }
            if(W>4)
            {
                W-=4;
                B+=4;
            }
            else
            {
                B+=W;
                W=0;
            }
            ++R;
            auto cur_profit = B*boardingCost-R*runningCost;
            if(cur_profit>optimal_profit)
            {
                optimal_profit=cur_profit;
                optimal_num=R;
            }
        }
    }
};