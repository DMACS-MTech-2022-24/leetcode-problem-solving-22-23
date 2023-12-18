class Solution {
public:
    int minOperationsMaxProfit(vector<int>& customers, int boardingCost, int runningCost) {
        int B=0,W=0,R=0,i=0;
        int cur_profit=0;
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
            ++R;
            auto M=min(4,W);
            W-=M;
            B+=M;
            cur_profit+=M*boardingCost-runningCost;
            if(cur_profit>optimal_profit)
            {
                optimal_profit=cur_profit;
                optimal_num=R;
            }
        }
    }
};