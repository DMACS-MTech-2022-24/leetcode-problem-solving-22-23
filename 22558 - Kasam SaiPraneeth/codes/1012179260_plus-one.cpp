class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int c =1; // initialization of carry to 1  
        int n=digits.size()-1; //n = size-1;
        for(int i=n;i>=0;i--){
            int temp;
            temp = digits[i]+c; //adds carry to the ith position number in the digits
            if(temp<10){ //if temp < 10
                digits[i]=temp; //temp is assigned to the ith position number in the digits
                c =0; // reset the carry to 0
                break; //break the loop
            }
            else{ // if temp > 10
                c = temp/10; // find the carry for the next number in ith position
                digits[i]=temp%10; //temp%10 is assigned to the ith position number in the digits
            }
        } 
        if(c!=0){ //after the loop is finished check weather carry is 0
        // otherwise the the number in carry is inserted at the begining of the vector digits
            digits.insert(digits.begin(),c); 
            }   
    return digits;//returns updated vector digits
    }
};