

unsigned int climbStairs(int n){
    unsigned int a,b;
    a=b=1;
    for(;n>0;--n)
    {
        a+=b;
        b=a-b;
    }
    return b;

}