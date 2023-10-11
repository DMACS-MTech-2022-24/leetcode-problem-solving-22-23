class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        auto size = nums.size();
        
        for(auto it = nums.begin();it != nums.end();)
        {
            if(*it==0)
                it=nums.erase(it);
            else
                ++it;
        }
        nums.insert(nums.end(),size-nums.size(),0);       
    }
};