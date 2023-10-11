class Solution {
public:
    bool isPowerOfThree(int n) {
      int r = n;
      while(n && r%3 == 0){
          r /= 3;
      }
      return n != 0 && r == 1;
    }
};