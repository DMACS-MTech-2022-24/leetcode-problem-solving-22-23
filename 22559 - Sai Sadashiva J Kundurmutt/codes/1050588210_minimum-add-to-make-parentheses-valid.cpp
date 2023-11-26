class Solution {
public:
    int minAddToMakeValid(string s) {
        int count = 0;
        int stat = 0;
        for(char c: s){
            if(c == '('){
                stat++;
                count++;
            }else {
                if(stat == 0){
                  count++;  
                } 
                else {
                    stat--;
                    count--;
                }
            }
        }
        return count;
    }
};