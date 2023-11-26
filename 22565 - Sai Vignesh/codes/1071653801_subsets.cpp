class Solution {
public:
    
    void helper(vector<int> nums, vector<vector<int>> &final, vector<int> tmp,int pos)
    {
        if(pos>=nums.size()) return;
        tmp.push_back(nums[pos]);
        final.push_back(tmp);
        for(;pos<final.size();++pos)
        {
            helper(nums,final,tmp,pos+1);
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> v;
        vector<vector<int>>final = {{}};
        for(int pos=0;pos<nums.size();++pos)
            helper(nums,final,v,pos);
        return final;
    }
};