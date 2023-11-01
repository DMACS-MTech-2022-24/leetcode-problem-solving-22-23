class Solution {
public:
    
    void helper(vector<int> nums, vector<vector<int>> &final, vector<int> tmp,int pos)
    {
        if(pos>=nums.size()) return;
        tmp.push_back(nums[pos]);
        final.push_back(tmp);
        while(pos<nums.size())  // pos<final.size() works!!??
        {
            helper(nums,final,tmp,++pos);
        }
        
        
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>final = {{}};
        for(int pos=0;pos<nums.size();++pos)
            helper(nums,final,{},pos);
        return final;
    }
};