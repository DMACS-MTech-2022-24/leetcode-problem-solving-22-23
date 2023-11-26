class Solution {
public:
    int numberOfSteps(int n) {
        int c=0;
        while(n != 0){
            if(n%2 == 0){
                c++;
                n/=2;
            }
            else if(n % 2 != 0){
                c++;
                n-=1;
            }
        }
    return c;
    }
};