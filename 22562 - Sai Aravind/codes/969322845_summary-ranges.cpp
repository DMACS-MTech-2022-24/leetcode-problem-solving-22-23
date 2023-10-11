class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> out;
        if(nums.size()==0)
            return out;
        else if(nums.size()==1)
        {
            out.push_back(to_string(nums[0]));
            return out;
        }
        
        for(int i=0,st=0;i<nums.size();++i)
        {
            if(i+1==nums.size() or nums[i+1] != nums[i]+1)
            {   
                if(st==i)
                {
                    out.push_back(to_string(nums[st]));
                }
                else
                {
                    out.push_back(to_string(nums[st])+string("->")+to_string(nums[i]));
                }
                st=i+1;
            }
        }
        
        return out;
    }
};