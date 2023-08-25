class Solution {
public:
    int missingNumber(vector<int>& nums) {
        const auto n=nums.size();
        auto sum=(n*(n+1))/2;
        for(const auto &x:nums)
        {
            sum-=x;
        }
        return sum;
    }
};