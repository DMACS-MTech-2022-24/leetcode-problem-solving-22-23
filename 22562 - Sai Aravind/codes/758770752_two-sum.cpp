class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> need;
        int i=0;
        for(int it:nums)
        {
            auto t=need.find(it);
            if(t!=need.end())
                return {i,t->second};
            need[target-it]=i;
            ++i;
        }
        return {};
    }
    
};