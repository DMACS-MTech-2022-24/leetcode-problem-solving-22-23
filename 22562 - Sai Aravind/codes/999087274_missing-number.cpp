class Solution {
public:
    int missingNumber(vector<int>& nums) {
        return nums.size()*(nums.size()+1)/2-reduce(nums.begin(), nums.end());
    }
};