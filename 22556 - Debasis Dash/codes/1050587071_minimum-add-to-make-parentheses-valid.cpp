class Solution {
public:
    int minAddToMakeValid(string s) {
        int opens=0,closes=0;
        for(char c:s){
            if(c=='('){
                opens++;
            }else{
                if(opens>0)opens--;
                else closes++;
            }
        }
        return opens+closes;
    }
};