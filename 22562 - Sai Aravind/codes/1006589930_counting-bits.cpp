class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> nums;
        nums.push_back(0);
        while(nums.size()<=n)
        {
            auto N=nums.size();
            for(int i=0;i<N and nums.size()<=n;++i)
            {
                nums.push_back(nums[i]+1);
            }
        }
        return nums;
    }
};