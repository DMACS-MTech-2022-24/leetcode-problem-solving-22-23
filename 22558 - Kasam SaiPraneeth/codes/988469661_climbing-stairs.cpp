class Solution {
public:
    int climbStairs(int n) {
        int a=1,b=1,c=1,i;
        for(i=1;i<n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        return c;
    }
};