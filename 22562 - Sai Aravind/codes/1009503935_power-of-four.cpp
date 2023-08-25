class Solution {
public:
    bool isPowerOfFour(int n) {
        for(;n>0;n>>=2)
        {
            if((n&3)!=0)
                return n==1;
        }
        return false;
    }
};