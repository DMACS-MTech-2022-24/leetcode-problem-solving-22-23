class Solution {
public:
    double climbStairs(int n) {
        double a = 1, b = 2,sum=0;
        while(--n)
        {
            b+=a;
            a = b-a;
        }
    return a;
    }
};