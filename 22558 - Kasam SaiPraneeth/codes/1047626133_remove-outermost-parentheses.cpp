class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> stack;
        string ans ="";
        int len = s.length(), i = 0;
        // this is used to the iterate the given string
        while(i<len){
            // when ever '(' is seen, then checks weather the stack is empty or not,
            // if !empty push_back s[i] to ans string and push s[i] to stack
            if(s[i] == '('){
                if(!stack.empty()){
                    ans.push_back(s[i]);
                    }
                stack.push(s[i]);
                }
            else{
                //if this ")" is seen then pop the stack element and check,weather the
                // stack empty,if !empty pushback s[i] to ans 
                stack.pop();
                if(!stack.empty()){
                    ans.push_back(s[i]);
                    }
                }
            i++;
            }
    return ans; //return the string after removing the outermost parentheses
    }
};