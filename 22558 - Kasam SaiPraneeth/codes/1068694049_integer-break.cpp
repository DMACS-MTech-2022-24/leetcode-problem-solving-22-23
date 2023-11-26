class Solution {
public:
    int integerBreak(int n) {
        int result = 1;
        // if n is less are equal to 3 return n-1
        if(n <= 3) return n-1;
        // if n is greater then 4, then an interger is created with value 1 and ,when ever it
        //entered into the loop multiply it with 3 and subtract it with 3
        while(n > 4){
            result *=3;
            n -=3;
        }
        // whenever it comes out of the loop multiply it with the remaning number n
        return result*n;
    }
};