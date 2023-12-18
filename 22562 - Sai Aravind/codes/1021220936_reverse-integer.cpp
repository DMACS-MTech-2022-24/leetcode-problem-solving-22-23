class Solution {
public:
    int reverse(int x) {
        int y=0;
        for(;x!=0;x/=10)
        {
            if(-214748364>y or y>214748364 or (-214748364==y and -8>x%10) or (y==214748364 and 7<x%10))
            {
                // cout<<(-214748364>y)<<(y>214748364)<<(-214748364==y)<<(-8>x%10)<<(y==214748364)<<(7<x%10)<<"\n";
                return 0;
            }
            y=y*10+x%10;
        }
        return y;
    }
};