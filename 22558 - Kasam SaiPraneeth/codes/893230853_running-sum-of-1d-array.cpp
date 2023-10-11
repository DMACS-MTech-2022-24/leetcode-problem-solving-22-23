class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sum;
        int a =0;      
        for(int i =0;i<nums.size();i++)
        {
            a=a+nums[i];
            sum.push_back(a);
        }
        return sum;

    }
};