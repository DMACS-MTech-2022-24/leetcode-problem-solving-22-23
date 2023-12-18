class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int m1=INT_MAX,m2=INT_MAX, M1=0,M2=0;

        for(int i=0;i<nums.size();++i)
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