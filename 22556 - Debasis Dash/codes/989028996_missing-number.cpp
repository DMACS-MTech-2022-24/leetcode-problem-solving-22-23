class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0, size=nums.size();
        for (int i = 0; i<size; i++ )
            sum += nums[i];

        int ans = size*(size+1)/2 - sum;
        return ans;
    }
};