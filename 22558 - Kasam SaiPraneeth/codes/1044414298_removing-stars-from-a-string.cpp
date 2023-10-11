class Solution {
public:
    string removeStars(string s) {
    stack<char>stack;
    // In this loop when ever you see *,pop the top element, else push the next
    // element in the string s
    for(int i=0; i<s.size() ; i++){
        if(s[i] !='*')
            stack.push(s[i]);
        else if(s[i] == '*'){
            stack.pop();
        }
    }
    // In this loop add(concatenate) the evert stack elements to the string output
    string output ="";
        while(!stack.empty()){
            output += stack.top();
            stack.pop();
        }
        // just reverse the output string 
    reverse(output.begin(), output.end());
    return output; // returns the string after removing stars from given string
    }
};