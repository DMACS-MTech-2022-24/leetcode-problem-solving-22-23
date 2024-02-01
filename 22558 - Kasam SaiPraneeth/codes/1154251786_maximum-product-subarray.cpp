class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int curmax = 1;
        int curmin = 1;
        int maxprd = INT_MIN;
        for(int it = 0; it < nums.size(); it++){
            // checking for negative number
            if(nums[it] < 0)
                swap(curmax, curmin);
            // keeping track of the max and min at each stage,beacues multiplication of
            // two neagtive (-) * (-) is +ve number
            curmax = max(curmax*nums[it], nums[it]);
            curmin = min(curmin*nums[it], nums[it]);
            maxprd = max(maxprd, curmax);
        }
        return maxprd;
    }
};