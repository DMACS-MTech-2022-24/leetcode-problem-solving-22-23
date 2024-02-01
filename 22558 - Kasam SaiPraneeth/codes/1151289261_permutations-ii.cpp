class Solution {
public:
    void set(vector<int>& nums, vector<int>& tmp,
             vector<vector<int>>& result, vector<bool>& seen) {
        if (nums.size() == tmp.size()) {
            result.push_back(tmp);
            return; 
        }
        for (int i = 0; i < nums.size(); i++) 
            if ((i==0||nums[i]!=nums[i-1]||seen[i-1])&&!seen[i]) {
                seen[i] = true;
                tmp.push_back(nums[i]);
                set(nums, tmp, result, seen);
                tmp.pop_back();
                seen[i] = false;
            }
        }

        vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> result;
        vector<int> tmp;
        vector<bool> seen(n, false);
        sort(nums.begin(), nums.end());
        set(nums, tmp, result, seen);
        return result;
    }
};