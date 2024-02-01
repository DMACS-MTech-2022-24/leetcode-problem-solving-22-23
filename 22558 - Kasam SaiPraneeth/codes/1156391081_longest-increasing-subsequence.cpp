class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);

        for(int i = 1 ;i<n; i++){
            int count = 1, current = nums[i];
            // checking the current element with the previous elements
            for(int j = 0; j<i; j++){
                if(nums[i] > nums[j]){
                    ans[i] = max(ans[i], ans[j]+1);
                }
            }
        }
        return *max_element(ans.begin(), ans.end());
    }
};