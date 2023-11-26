class Solution {
public:
    bool canWinNim(int n) {
        if(n == 1 || n == 2)
            return 1;
        // if(n%3 == 0)// && n%2 == 1)
        //     return 1;
        // return 0;
        return n%4 != 0;
    }
};