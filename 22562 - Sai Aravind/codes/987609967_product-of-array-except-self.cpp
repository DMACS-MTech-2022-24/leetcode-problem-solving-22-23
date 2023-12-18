class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1;
        vector<int> interm(nums.size());
        for(int i=0;i<nums.size();++i)
        {
            interm[i]=prod;
            prod*=nums[i];
        }
        prod=1;
        for(int i=nums.size()-1;i>0;--i)
        {
            prod*=nums[i];
            interm[i-1]*=prod;
        }
        return interm;
    }
};