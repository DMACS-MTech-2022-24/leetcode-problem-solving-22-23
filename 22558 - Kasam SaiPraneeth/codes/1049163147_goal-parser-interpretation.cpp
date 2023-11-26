class Solution {
public:
    string interpret(string command) {
        int n = command.size();
        string result = "";
        for(int i =0; i<n ; ){
            if(command[i]== 'G'){
                result.push_back('G');
                i++;
            }
            else if(command[i] == '(' && command[i+1] == ')' && i<n){
                result.push_back('o');
                i +=2;
            }
            else {
                result.push_back('a');
                result.push_back('l');
                i +=4;
            }
        }
        return result;
    }
};