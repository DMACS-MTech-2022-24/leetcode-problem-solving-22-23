class Solution {
public:
    bool canWinNim(int n) {
        // if(n == 1 || n == 2)
        //     return 1;
        return n%4 != 0;
    }
};