class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;

        int prev = nums[0],k=1;
        for(auto i=nums.begin()+1;i!=nums.end();)
        {
            if(*i == prev)
                nums.erase(i);
            else
            {
                prev = *i;
                ++i;++k;
            }
                
            
        }
        return k;
    }
};