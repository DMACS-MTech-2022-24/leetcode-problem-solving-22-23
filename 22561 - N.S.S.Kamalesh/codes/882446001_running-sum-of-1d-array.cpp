class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> v;
        v.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
            v.push_back(v.at(i-1)+nums.at(i));
        return v;
    }
};