class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> out;
        for(int i=0;i<nums.size();)
        {
            if(nums[i]==i+1 or nums[i]==0)
            {
                ++i;
            }
            else if(nums[i]==nums[nums[i]-1])
            {
                out.push_back(nums[i]);
                nums[i]=nums[nums[i]-1]=0;
                ++i;
            }
            else
            {
                swap(nums[i],nums[nums[i]-1]);
            }
        }
        return out;
    }
};