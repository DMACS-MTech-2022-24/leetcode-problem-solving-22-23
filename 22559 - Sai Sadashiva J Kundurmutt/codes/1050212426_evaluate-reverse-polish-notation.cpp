
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>stk;
        for(string token: tokens){
            int op1, op2;
            switch(token[0]){
                case '+':
                op1 = stk.top();
                stk.pop();
                op2 = stk.top();
                stk.pop();
                stk.push(op2 + op1);
                break;
                case '-':
                if(token.size() == 1){
                    op1 = stk.top();
                    stk.pop();
                    op2 = stk.top();
                    stk.pop();
                    stk.push(op2 - op1);
                }else{
                    stk.push(stoi(token));
                }
                break;
                case '/':
                op1 = stk.top();
                stk.pop();
                op2 = stk.top();
                stk.pop();
                stk.push(op2 / op1);
                break;
                case '*':
                op1 = stk.top();
                stk.pop();
                op2 = stk.top();
                stk.pop();
                stk.push(op2 * op1);
                break;
                default:
                stk.push(stoi(token));
                printf("%d\n", stoi(token));
                // break;

            }

        }

        return stk.top();
    }
};