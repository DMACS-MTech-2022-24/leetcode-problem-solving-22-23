class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i=0,j=1;
        int cnt=0;
        while(cnt<nums.size()/2 and j<nums.size())
        {
            if(nums[i]==0)
            {
                ++i;
            }
            else if(nums[i]!=nums[j++])
            {
                ++cnt;
                nums[i++]=nums[j-1]=0;
            }
        }
        for(;i<nums.size() and nums[i]==0;++i);
        return nums[i];
    }
};