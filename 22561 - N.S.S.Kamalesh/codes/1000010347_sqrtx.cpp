class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        if(x<=3) return 1;
        long int l=2,h=x/2,t,m;
        while(l<h){
            m=(l+h)/2;
            t=m*m;
            if(t==x) return m;
            else if(t<x) l=m+1;
            else h=m;
        }
        t=l*l;
        if(t==x) return l;
        else if(t<x) return l;
        else return l-1;
    }
};