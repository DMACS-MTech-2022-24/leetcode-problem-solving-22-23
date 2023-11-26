class Solution {
public:
    int addDigits(int num) {
        if(num < 10)
            return num;
        while(num >=10){ // if num is  >= 10 then only it will enter the while 
            int sum=0;
            while(num >0){ // checks the num >0
                sum+=num%10; //to find the units position digit
                num=num/10; //this to remove the units place number in num
            }
            num =sum; // assign the sum to num when sum < 10
        }
        return num; // returns the sum
    }
};