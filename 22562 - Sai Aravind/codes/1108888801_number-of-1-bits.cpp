class Solution {
public:
    int hammingWeight(uint32_t n) {
        int hw=0;
        while(n>0)
        {
            hw+=n&1;
            n>>=1;
        }
        return hw;
    }
};