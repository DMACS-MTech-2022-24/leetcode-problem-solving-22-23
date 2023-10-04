class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i=0;
        while(i<nums.size())
        {
            if(i==nums.size())
                i=0;
            if(nums[i]==i+1 or nums[i]==0)
            {
                ++i;
            }
            else if(nums[i]>0 and nums[i]<=nums.size())
            {
                auto tmp=nums[i]-1;
                
                if(nums[tmp]==tmp+1)
                {
                    nums[i++]=0;
                }
                else
                {
                    nums[i]=nums[tmp];
                    nums[tmp]=tmp+1;
                }
            }
            else
            {
                nums[i++]=0;
            }
        }
        for(i=0;i<nums.size() and nums[i]==i+1;++i);
        return i+1;
    }
};