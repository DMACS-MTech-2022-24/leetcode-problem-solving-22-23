class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for(int i=0;i<nums.size();)
        {
            if(nums[i]==i+1 or nums[i]==nums[nums[i]-1])
            {
                ++i;
            }
            else
            {
                swap(nums[i],nums[nums[i]-1]);
            }
        }
        vector<int> out;
        for(int i=0;i<nums.size();++i)
            if(nums[i]!=i+1)
                out.push_back(i+1);
        return out;
    }
};