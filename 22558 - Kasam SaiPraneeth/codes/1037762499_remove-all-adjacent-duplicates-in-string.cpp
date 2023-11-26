class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>stack;
        int len = s.length(),i=0;
        // pushing the characters in the string one by one ,and then checking with the very next
        // character in the string with the top element in the stack,if the both are same then pop
        // the element

        
        while(i<len){
            stack.push(s[i]);
            if(stack.top() == s[i+1]){
                stack.pop();
                i+=1;
            }
            //else if not same the store the top in the char f and pop the element in the stack
            // then check f with the stact top, if equal pop, else push f
            else if(!stack.empty()){
                    char f = stack.top();
                    stack.pop();
                    if(!stack.empty()&&f == stack.top()){
                        stack.pop();
                    }
                    else stack.push(f);
                }
            i++;
        }
        // poping the top element and concatenation of the element with the solution
        // then reversing the string solution and retuning the solution
        string solution = "";
        while(!stack.empty()){
            solution += stack.top();
            stack.pop();
        } 
        reverse(solution.begin(),solution.end());
        return solution;

    }
};