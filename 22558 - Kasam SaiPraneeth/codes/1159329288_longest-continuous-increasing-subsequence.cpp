class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n = nums.size();
        int result = -1;
        int count = 1;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] < nums[i + 1])
                count++;
            else {
                result = max(result, count);
                count = 1;
            }
        }

        result = max(result, count);

        return result;
    }
};