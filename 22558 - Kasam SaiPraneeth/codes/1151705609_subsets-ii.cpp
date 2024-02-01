class Solution {
public:
    void set(vector<int>&nums, vector<int>&tmp, int a, vector<vector<int>> &result){
        result.push_back(tmp);

        for(int i = a; i<nums.size() ; i++){
            if(i == a||nums[i]!=nums[i-1]){
                tmp.push_back(nums[i]);
                set(nums, tmp, i+1, result);
                tmp.pop_back();
            }
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        vector<int> tmp;

        set(nums, tmp, 0, result);

        return result;
    }
};
