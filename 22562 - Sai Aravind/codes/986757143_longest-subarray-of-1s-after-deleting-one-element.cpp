class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i=0;
        while(i<nums.size() and nums[i++]==0);
        if(i==nums.size())
            return 0;
        int sz1=0,sz2=1,mx=1;

        for(;i<nums.size();++i)
        {
            if(nums[i]==1)
            {
                ++sz2;
            }
            else
            {
                if(sz1+sz2>mx)
                    mx=sz1+sz2;
                sz1=sz2;
                sz2=0;
            }
        }
        if(sz1+sz2>mx)
            mx=sz1+sz2;
        return mx-int(mx==nums.size());
    }
};