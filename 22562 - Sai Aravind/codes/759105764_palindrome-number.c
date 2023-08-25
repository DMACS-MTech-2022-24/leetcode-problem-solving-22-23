

bool isPalindrome(int x){
    int X=x;
    if(x<0)
        return 0;
    else if(x<10)
        return 1;
    int digits=(int)log10(x);
    int rev=0;
    if((digits&1) && x%11)
    {
        return 0;
    }
    int i=(int)pow(10,digits);
    while(i>0)
    {
        rev+=(x%10)*i;
        x/=10;
        i/=10;
    }
    return X==rev;
}