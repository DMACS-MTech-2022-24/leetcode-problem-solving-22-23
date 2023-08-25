class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,j=0;
        while(i<nums.size() and j<nums.size())
        {
            if(nums[i]!=0)
            {
                ++i;
                ++j;
            }
            else if(nums[j]==0)
            {
                ++j;
            }
            else
            {
                nums[i]=nums[j];
                nums[j]=0;
            }
        }
    }
};