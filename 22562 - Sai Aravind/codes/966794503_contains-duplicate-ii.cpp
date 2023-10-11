class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int> dup;
        for(int i=0;i<nums.size();++i)
        {
            auto iit=dup.find(nums[i]);
            if(iit==dup.end())
                dup[nums[i]]=i;
            else if(i-iit->second<=k)
                return true;
            else
                iit->second=i;
        }
        return false;
    }
};