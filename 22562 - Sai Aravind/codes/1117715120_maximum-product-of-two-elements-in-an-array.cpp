class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int M1=nums[0],M2=0;

        for(int i=1;i<nums.size();++i)
        {
            if(M1<nums[i])
            {
                M2=M1;
                M1=nums[i];
            }
            else if(M2<nums[i])
            {
                M2=nums[i];
            }
        }
        return (M1-1)*(M2-1);
    }
};