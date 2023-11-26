class Solution {
public:
    int addDigits(int num) {
        if(num <10)
            return num;
        int n = num%9;
        if(n == 0) return 9;
        return n;
    }
};