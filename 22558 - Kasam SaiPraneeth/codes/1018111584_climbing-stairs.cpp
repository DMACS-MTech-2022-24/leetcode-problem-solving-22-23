class Solution {
public:
    int climbStairs(int n) {
        int a,b,c;
        if(n <3)
            return n;
        a=1,b=2;
        for(int i=3; i<=n;i++){
            c = a+b;
            a = b;
            b = c;
        }
    return c;
    }
};