

int climbStairs(int n){
    int a,b,c,i;
    a=1;
    b=1;
    c=1;
    for(i=1;i<n;i++){
        c=a+b;
        a=b;
        b=c;
    }
   return c;
}