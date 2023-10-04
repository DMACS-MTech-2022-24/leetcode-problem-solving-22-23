class Solution {
public:
    int countElements(vector<int>& nums) {
        int m=nums[0],M=nums[0];
        int mc=0,Mc=0;

        for(auto const& x:nums)
        {
            if(x==m)
                ++mc;
            else if(x<m)
            {
                m=x;
                mc=1;
            }
            if(x==M)
                ++Mc;
            else if(x>M)
            {
                M=x;
                Mc=1;
            }
        }
        return nums.size()-mc-int(m!=M)*Mc;
    }
};