class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>tmp(2*nums.size());
        for(int i=0;i<nums.size();i++){
            tmp[i]=nums[i];
            tmp[i+nums.size()]=nums[i];
        }
        return tmp;
    }
};