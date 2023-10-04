class Solution {
public:
    double myPow(double x, int n) {
        uint N=n;
        if(n<0)
        {
            x=1/x;
            N=-N;
        }
        double y=1;
        for(double z=x;N>0;N>>=1,z*=z)
        {
            if((1&N)!=0)
                y*=z;
        }
        return y;
    }
};