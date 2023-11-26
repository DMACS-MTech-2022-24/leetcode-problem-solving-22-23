class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int j=nums.size();
        vector<int>tmp(2*j);
        for(int i=0;i<j;i++)
            tmp[i]=nums[i];
        for(int i=0;i<j;i++)
            tmp[i+j]=nums[i];
        return tmp;
    }
};