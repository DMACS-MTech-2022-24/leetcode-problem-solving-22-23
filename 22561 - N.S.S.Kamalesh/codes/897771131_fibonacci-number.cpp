class Solution {
public:
    int f[31];
    void dp(){
        f[0]=0;f[1]=1;
        for(int i=2;i<=30;i++)
            f[i]=f[i-1]+f[i-2];
    }
    int fib(int n) {
        dp();
        return f[n];
    }
};