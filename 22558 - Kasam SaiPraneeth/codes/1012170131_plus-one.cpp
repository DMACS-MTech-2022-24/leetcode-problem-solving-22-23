class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int c =1;
        int n=digits.size()-1;
        for(int i=n;i>=0;i--){
            int temp;
            temp = digits[i]+c;
            if(temp<10){
                digits[i]=temp;
                c =0;
                break;
            }
            else{
                c = temp/10;
                digits[i]=temp%10;
            }
        } 
        if(c!=0){
            digits.insert(digits.begin(),c);
            }   
    return digits;
    }
};