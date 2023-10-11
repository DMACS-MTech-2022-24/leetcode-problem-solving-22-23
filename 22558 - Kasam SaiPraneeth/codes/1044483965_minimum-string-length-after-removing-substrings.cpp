class Solution {
public:
    int minLength(string s) {
       stack<char> stack;
       // "CDABCDD","ABFCACDB"
       // intially push an extare 
    //    stack.push('@');
       for(int i = 0; i<s.size(); i++){
            stack.push(s[i]);
           if(stack.top() == 'B'){
               stack.pop();
               if(!stack.empty() && stack.top() == 'A') stack.pop();
               else stack.push('B');
            }
            else if(stack.top() == 'D'){
               stack.pop();
               if(!stack.empty() && stack.top() == 'C') stack.pop();
               else stack.push('D');
            }
        }
        return stack.size();
    }
};