class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod1=1,prod2=1;
        vector<int> interm(nums.size(),1);
        for(int i=0;i<nums.size();++i)
        {
            interm[i]*=prod1;
            interm[nums.size()-i-1]*=prod2;

            prod1*=nums[i];
            prod2*=nums[nums.size()-i-1];
        }
        return interm;
    }
};