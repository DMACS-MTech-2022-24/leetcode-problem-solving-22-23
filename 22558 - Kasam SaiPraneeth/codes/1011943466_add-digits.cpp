class Solution {
public:
    int addDigits(int num) {
        if(num == 0) return 0; //if num equal to 0 then return 0
        int n = num%9; //find the mod
        if(n == 0) return 9; //if n == 0 then the number is 9
        return n; //else print the n
    }
};