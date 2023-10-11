class Solution {
public:

    double powUtil(double x, int n)
    {
        if(n == 0)
            return 1;
        
        double temp = powUtil(x, n/2);
        if(n % 2){
            return temp * temp * x;
        }else{
            return temp * temp;
        }
    }
    double myPow(double x, int n) {
        
        double _x = n >= 0 ? x: (1.0/x);
        return powUtil(_x, abs(n));
        
    }
};