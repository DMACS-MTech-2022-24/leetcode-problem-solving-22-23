

bool isPalindrome(int x){
    if(x<0)
        return 0;
    else if(x<10)
        return 1;
    int digits=1+(int)log10(x);
    //printf("%d %d",digits,x%11);
    if(!(digits&1) && x%11)
    {
        return 0;
    }
    int i=(int)pow(10,digits-1);
    
    while(i>1)
    {
        //printf("A :%d %d\n",x,i);
        //printf("B :%d %d %d\n",x/i,(x/i)%10,x%10);
        if((x/i)%10!=x%10)
            return 0;
        x/=10;
        i/=100;
    }
    return 1;
}