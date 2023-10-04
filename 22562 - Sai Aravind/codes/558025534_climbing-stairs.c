

unsigned int climbStairs(int n){
    unsigned int a,b,t;
    a=b=t=1;
    for(int i=0;i<n;++i)
    {
        t=b;
        b=a;
        a+=t;
    }
    return b;

}