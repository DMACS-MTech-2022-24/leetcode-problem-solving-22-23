class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int i,j,s = nums.size(),larger;
        vector<int> res = {};
        for(i=0;i<s;++i)
        {
            larger=0;
            for(j=1;j<s;++j)
                if(nums[j]<nums[0]) ++larger;
            res.push_back(larger);
            larger = nums[0];
            nums.erase(nums.begin());
            nums.push_back(larger);
        }
    return res;
    }
};