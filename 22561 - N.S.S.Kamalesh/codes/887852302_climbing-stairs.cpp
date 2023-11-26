class Solution {
public:
    int cs[46];
    void dp(){
        cs[1]=1;cs[2]=2;
        for(int i=3;i<46;i++)
            cs[i]=cs[i-2]+cs[i-1];
    }
    int climbStairs(int n) {
        dp();
        return cs[n];
    }
};