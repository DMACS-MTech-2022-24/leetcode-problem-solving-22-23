class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int tmp=0;
        for(auto i:nums)
            tmp=tmp^i;
        return tmp;
    }
};