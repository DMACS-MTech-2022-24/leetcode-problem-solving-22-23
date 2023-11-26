class Solution {
public:
    int minAddToMakeValid(string s) {
       stack<char> st;
       int open = 0 ,close = 0;
       for(char i:s){
           if(i == '(')
                open++;
            else{
                if(open >0)
                    open--;
                else
                    close++;
            }
       }
       return open+close; 
    }
};