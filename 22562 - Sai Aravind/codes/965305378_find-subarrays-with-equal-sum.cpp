class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        set<int> sums;
        for(int i=1;i<nums.size();++i)
        {
            if(not sums.insert(nums[i-1]+nums[i]).second)
                return true;
        }
        return false;
    }
};