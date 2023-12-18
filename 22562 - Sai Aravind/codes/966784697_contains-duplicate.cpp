class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> dup;
        for(auto const& x:nums)
        {
            if(not dup.insert(x).second)
            {
                return true;
            }
        }
        return false;
    }
};