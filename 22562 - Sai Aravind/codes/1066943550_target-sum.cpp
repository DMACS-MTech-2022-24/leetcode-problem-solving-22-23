class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int cnt=0;
        vector S={make_pair(0,0)};
        while(not S.empty())
        {
            auto &[cur_sum,idx]=S.back();
            if(idx<nums.size())
            {
                auto right_branch_sum=cur_sum+nums[idx];
                cur_sum-=nums[idx++];
                S.push_back({right_branch_sum,idx});
            }
            else
            {
                cnt+=(cur_sum==target);
                S.pop_back();
            }
        }
        return cnt;
    }
};