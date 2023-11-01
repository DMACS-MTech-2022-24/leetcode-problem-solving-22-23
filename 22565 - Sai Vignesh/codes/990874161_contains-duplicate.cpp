class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> dup;
        for(int i : nums)
        {
            if(dup.count(i)>0)
                return true;
            dup.insert(i);
        }
        return false;
    }
};