class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int sum=0;
        int N=1<<nums.size();
        for(int i=1;i<N;++i)
        {
            auto I=i;
            int xor_sum=0;
            for(int j=0;I>0;++j,I>>=1)
            {
                if((I&1)==1)
                {
                    xor_sum^=nums[j];
                }
            }
            sum+=xor_sum;
        }
        return sum;
    }
};