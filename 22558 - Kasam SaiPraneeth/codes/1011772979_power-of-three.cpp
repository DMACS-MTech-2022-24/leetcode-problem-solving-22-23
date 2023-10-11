class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n == 0 || n ==-1){ // if n=0 and -1 there is no need to check wheather it is power of 3
            return 0;
            }
        while(n%3 == 0){ // if n mod is 0 then only it enters the loop other wise false is returned
            n/=3;   // divide by 3 for iteration
        }
        return n==1; //returns true if n equals to 1sssssssssssssssssssssssssssss
    }
};