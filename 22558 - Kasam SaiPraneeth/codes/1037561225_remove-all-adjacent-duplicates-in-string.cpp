class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>stack;
        int len = s.length(),i=0;
        while(i<len){
            stack.push(s[i]);
            if(stack.top() == s[i+1]){
                stack.pop();
                i+=1;
            }
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
        string solution = "";
        while(!stack.empty()){
            solution += stack.top();
            stack.pop();
        } 
        reverse(solution.begin(),solution.end());
        return solution;

    }
};