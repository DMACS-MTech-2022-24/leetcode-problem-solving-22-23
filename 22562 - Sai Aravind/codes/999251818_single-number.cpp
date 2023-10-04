class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int num=0;
        for(const auto &x:nums)
        {
            num^=x;
        }
        return num;
    }
};