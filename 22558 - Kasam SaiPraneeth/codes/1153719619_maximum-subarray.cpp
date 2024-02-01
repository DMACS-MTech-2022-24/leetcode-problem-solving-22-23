class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currsum = 0;
        int maxsum = INT_MIN;

        // iterating over the nums
        for(int it : nums){
            //adding the current nums[i] to the currum
            currsum += it;
            // finding the maxsum in the nums
            maxsum = max(maxsum, currsum);
            if(currsum < 0)
                currsum = 0;
        }
        return maxsum;
    }
};