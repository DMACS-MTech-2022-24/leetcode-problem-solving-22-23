class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sz=nums.size()+1;
        int i=0,j=0,cur_sum=0;
        while(true)
        {
            if(nums[i]>=target)
                return 1;
            else if(cur_sum>=target)
            {
                if(j-i<sz)
                    sz=j-i;
                cur_sum-=nums[i++];
            }
            else if(j<nums.size())
                cur_sum+=nums[j++];
            else
                return sz%(nums.size()+1);
        }
    }
};