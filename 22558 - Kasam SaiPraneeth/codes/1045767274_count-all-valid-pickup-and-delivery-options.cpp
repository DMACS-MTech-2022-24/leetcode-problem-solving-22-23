class Solution {
public:
    int countOrders(int n) {
        long long int a;
        int b;
        a = 1;
        for(int i = 1;i<=2*n;i++){
            if(i%2==0)
                a = a*(i/2);
            else a = a*i;
            if(a > (1000000007))
                a%=1000000007;
            b=a;
        }
        return b;

    }
};