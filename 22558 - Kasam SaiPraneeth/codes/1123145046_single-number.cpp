class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result =0;
        //using xor if two values for same then ouput will be zero and when there is not repeated value then only that value remains ,then that wiill be the answer
        for(int a : nums)
            result ^= a;
        return result; 
    }
};