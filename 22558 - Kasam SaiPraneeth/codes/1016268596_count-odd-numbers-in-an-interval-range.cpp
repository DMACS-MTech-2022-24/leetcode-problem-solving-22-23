class Solution {
public:
    int countOdds(int l, int h) {
       if(l%2 == 1 || h%2 == 1) //either of the one is odd are both are odd
            return ((h-l)/2)+1; //return h-l/2 +1
        return (h-l)/2; //are else h-l/2
    }
};