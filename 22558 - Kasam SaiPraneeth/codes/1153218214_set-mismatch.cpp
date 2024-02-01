class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        int n = nums.size();
        int actualsum = 0, duplicate;
        for (int i = 0; i < n - 1; i++) {
            actualsum += nums[i];
            if (nums[i] == nums[i + 1]) {
                duplicate = nums[i + 1];
            }
        }
        actualsum += nums[n - 1];
        int exceptedsum = 0;
        exceptedsum = n * (n + 1) / 2;
        int missnum = exceptedsum - (actualsum - duplicate);
        ans.push_back(duplicate);
        ans.push_back(missnum);
        return ans;
    }
};