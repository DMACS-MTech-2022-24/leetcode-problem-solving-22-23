class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int j=nums.size();
        for(int i=0;i<j;i++)
            nums.push_back(nums[i]);
        return nums;
    }
};