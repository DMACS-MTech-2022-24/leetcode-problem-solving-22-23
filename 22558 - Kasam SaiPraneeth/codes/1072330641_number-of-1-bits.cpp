class Solution {
public:
    int hammingWeight(uint32_t n) {
        // Bitwise Manipulation
        // time complexity is O(logN)
        // space complexity is O(1)
        
        // counts the number of 1's in the n
        int count = 0;
        // loop will works till the n becomes 0
        while(n != 0){
            // if n%2 is 1 means the least significant is 1 and 1 is added to the count
            // else 0 is the LSB and 0 is added to the count.
            count += (n%2);
            // after which a right is done
            n >>= 1;
        }
        // then return the no.of 1's in the n
        return count;
    }
};
