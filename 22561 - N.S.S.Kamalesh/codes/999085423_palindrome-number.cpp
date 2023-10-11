class Solution {
public:
    bool isPalindrome(int x) {
        int tmp=x;
        int a[]={1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000};
        if(x<0) return false;
        if(x<10 || (x<100 && x%11==0)) return true;
        int j=log10(x);
        while(j>=0 && x%10==tmp/a[j]){
            x/=10;
            tmp%=a[j];
            --j;
        }
        if(j==-1)
            return true;
        return false;
    }
};