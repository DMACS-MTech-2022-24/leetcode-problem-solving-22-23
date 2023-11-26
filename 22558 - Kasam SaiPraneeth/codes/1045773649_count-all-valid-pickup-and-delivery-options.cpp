class Solution {
public:
    int countOrders(int n) {
        long long int a;
        int b;
        a = 1;
        // Ans is total no.of purmutaion divided by half of the

        // if n =2; ans = {p1,p2,d1,d2} so, total 4factorial/2^2 
        for(int i = 1;i<=2*n;i++){
            if(i%2==0) // if i is even the divide the i by 2
                a = a*(i/2);
            else a = a*i; //else just multiply withe previous a
            if(a > (1000000007)) //if a is greater then 10^9+7 then a = a%10^9+7
                a%=1000000007;
            b=a;
        }
        return b;//returns the total no.of valid count

    }
};