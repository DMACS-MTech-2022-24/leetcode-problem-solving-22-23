class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        if(x<=3) return 1;
        int tmp;long int t;
        for(long int i=2;i<=x/2;++i){
            t=i*i;
            if(t==x) return i;
            else if(t<x) tmp=i;
            else return tmp;
        }
        return tmp;
    }
};