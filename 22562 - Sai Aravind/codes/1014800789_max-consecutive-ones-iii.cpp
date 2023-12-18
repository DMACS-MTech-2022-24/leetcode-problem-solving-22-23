class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0,j=0,zeros=0;
        int max_len=0;
        while(j<nums.size())
        {
            if(nums[j]==1)
            {
                ++j;
            }
            else if(zeros<k)
            {
                ++j;
                ++zeros;
            }
            else
            {
                if(j-i>max_len)
                    max_len=j-i;
                if(nums[i]==0)
                    ++j;
                ++i;
            }
        }
        if(j-i>max_len)
            max_len=j-i;
        return max_len;
    }
};