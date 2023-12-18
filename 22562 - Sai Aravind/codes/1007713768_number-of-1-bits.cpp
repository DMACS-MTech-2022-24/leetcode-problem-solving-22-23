class Solution {
public:
    int hammingWeight(uint32_t n) {
        int sum=0;
        for(;n>0;n>>=1)
            sum+=(n&1);
        return sum;
    }
};