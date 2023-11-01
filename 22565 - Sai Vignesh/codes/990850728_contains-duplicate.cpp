class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> dup;
        for(auto i : nums)
        {
            // cout<<i<<endl;
            dup[i] +=1;
            if (dup[i] == 2)
                return true;
            // cout<<dup[i]<<endl;
        }
        return false;
    }
};