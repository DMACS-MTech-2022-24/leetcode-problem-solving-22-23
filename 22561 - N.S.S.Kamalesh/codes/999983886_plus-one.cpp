class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int sum,c=1;
        for(int i=digits.size()-1;i>=0;--i){
            sum=digits[i]+c;
            digits[i]=sum%10;
            c=sum/10;
        }
        if(c!=0) digits.insert(digits.begin(),c);
        return digits;
    }
};