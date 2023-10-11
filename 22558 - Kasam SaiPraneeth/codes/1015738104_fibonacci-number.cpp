class Solution {
public:
    int fib(int n) {
        // order is O(2^_N) time and O(N) space
        if(n == 0 || n==1) //if n =0 or 1 return the n
            return(n);
        return fib(n-1)+fib(n-2); // are else goes in recursion using this formula
    }
};