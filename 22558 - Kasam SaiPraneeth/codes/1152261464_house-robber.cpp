class Solution {
public:
    int rob(vector<int>& nums) {
        // initializing two max with 0
        int firstmax = 0, secondmax = 0;
        // iteration through the loop and finding out which all houeses to rob to
        // get the maximum amount of moneny
        for(int i = 0 ; i<nums.size() ; i++){
            int tmp = firstmax;
            firstmax = max(secondmax + nums[i], firstmax);
            secondmax = tmp;
        }
        return firstmax;

    }
};