class Solution {
public:
    int hammingDistance(int x, int y) {
        int a = x^y;
        int count = 0;
        //count the number of 1's in the remainder when divide by2 
        while(a>0){
            count+=a%2;
            a/=2;
        }
        return count;
    }
};