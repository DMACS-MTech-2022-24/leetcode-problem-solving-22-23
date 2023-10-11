class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t m=0;
        for(int i=31;i>=0;--i,n>>=1)
        {
            m=(m<<1)|(n&1);
        }
        return m;
    }
};