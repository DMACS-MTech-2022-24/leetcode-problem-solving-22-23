class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int mcost1 = 0 , mcost2 = 0;

        for(int i = 2 ; i <= cost.size(); i++){
            int current_min = min(mcost1 + cost[i-1], mcost2 + cost[i-2]);
            mcost2 = mcost1;
            mcost1 = current_min; 
        }
        return mcost1;
    }
};