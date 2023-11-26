#include<bits/stdc++.h>


class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) 
            return false;

        long long int temp = x;
        long long int reverse_num = 0;
        while(temp){
            reverse_num = reverse_num * 10;
            reverse_num += temp % 10;
            temp = temp / 10;

        }
        cout << reverse_num << endl;
        return ((x - reverse_num) == 0);
    }
};