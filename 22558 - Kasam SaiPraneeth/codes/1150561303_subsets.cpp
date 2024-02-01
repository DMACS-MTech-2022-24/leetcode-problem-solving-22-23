class Solution {
public:
    vector<vector<int>> result;
    void set(vector<int>& nums, vector<int>&tmp, int a) {
        result.push_back(tmp);
        for (int i = a; i < nums.size(); i++) {
            tmp.push_back(nums[i]);
            set(nums, tmp, i + 1);
            tmp.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> tmp;
        set(nums,tmp, 0);
        return result;
    }
};