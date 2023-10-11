class Solution {
public:
    bool isValid(string s) {
       stack<char> brackets;
        if(s.empty() == true)
            return true;
        for(int i=0; i<s.length(); i++){
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                brackets.push(s[i]);
            else{
                if(brackets.empty())
                    return false;


                if(s[i] == ')' && brackets.top()=='(')
                    brackets.pop();
                else if(s[i] == '}' && brackets.top() == '{')
                    brackets.pop();
                else if (s[i] == ']' && brackets.top() == '[')
                    brackets.pop();
                else
                    return(false);
            }
            
       }
       return(brackets.empty());

    }
};