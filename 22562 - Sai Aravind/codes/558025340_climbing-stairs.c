

long climbStairs(int n){
    long a,b,t;
    a=b=t=1;
    for(int i=0;i<n;++i)
    {
        t=b;
        b=a;
        a+=t;
    }
    return b;

}