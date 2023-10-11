class Solution {
public:
    bool isValid(string s) {
       stack<char> mystack;
       cout<<s.size();
       for(int i=0; i<s.size(); i++){
           if(s[i]=='(' ||s[i]=='{'||s[i]=='[')
                mystack.push(s[i]);
            else{ 
                if(mystack.empty())
                    return false;
                if(s[i]==')' && mystack.top()=='(')
                    mystack.pop();
                else if(s[i]=='}' && mystack.top()=='{')
                    mystack.pop();
                else if(s[i]==']' && mystack.top()=='[')
                    mystack.pop();
                else
                    return false;
            }
       }
        return mystack.empty();
    }
};