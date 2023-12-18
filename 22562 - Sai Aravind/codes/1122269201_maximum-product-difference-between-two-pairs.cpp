class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        const int a=nums[0]<=nums[1],b=1-a;
        int m1=nums[b],m2=nums[a], M1=nums[a],M2=nums[b];

        for(int i=2;i<nums.size();++i)
        {
            auto &x=nums[i];
            // printf("%d  :  %d %d \t %d %d\n",x,m1,m2,M1,M2);
            if(x<m1)
            {
                m2=m1;
                m1=x;
            }
            else if(x<m2)
            {
                m2=x;
            }
            if(x>M1)
            {
                M2=M1;
                M1=x;
            }
            else if(x>M2)
            {
                M2=x;
            }
        }
        return M1*M2-m1*m2;
    }
};