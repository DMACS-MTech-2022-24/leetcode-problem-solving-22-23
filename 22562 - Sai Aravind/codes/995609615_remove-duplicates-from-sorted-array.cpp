class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int num=nums[0];
        for(auto it=nums.begin()+1;it!=nums.end();)
        {
            if(num==*it)
            {
                it=nums.erase(it);
            }
            else
            {
                num=*it;
                ++it;
            }
        }
        return nums.size();
    }
};