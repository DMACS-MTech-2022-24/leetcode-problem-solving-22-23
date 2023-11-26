class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int j = digits.size()-1;
        digits[j]+=1;
        while(digits[j]==10)
        {
            digits[j] = 0;
            if(j-1>-1)
                digits[--j]+=1;
            else{
                digits.emplace(digits.begin(),1);
            }
        }
    return digits;
    }
};