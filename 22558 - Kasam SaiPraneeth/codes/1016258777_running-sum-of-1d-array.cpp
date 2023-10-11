class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i =1; i<nums.size(); i++){ 
            //ith index value is the sum of the previous index val and current val
            nums[i] += nums[i-1];
        }
        return nums;
    }
};