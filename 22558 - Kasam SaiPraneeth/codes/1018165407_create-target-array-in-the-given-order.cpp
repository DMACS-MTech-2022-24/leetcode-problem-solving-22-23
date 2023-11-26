class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target;
        int j;
        for(int i = 0; i<nums.size(); i++){
            j = index[i];
            target.insert(target.begin()+j, nums[i]);
        }
        return target;
    }
};