class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int i=1,j=1;
        for(;i<nums.size();++i)
        {
            if(nums[i]!=nums[i-1])
            {
                nums[j] = nums[i];
                ++j;
            }
        }
        return j;
    }
};