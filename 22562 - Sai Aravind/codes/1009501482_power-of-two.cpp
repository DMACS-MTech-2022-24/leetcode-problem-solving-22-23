class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(;n>0;n>>=1)
        {
            if((n&1)==1)
                return n==1;
        }
        return false;
    }
};