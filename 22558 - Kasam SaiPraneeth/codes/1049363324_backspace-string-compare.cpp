class Solution {
public:
    bool backspaceCompare(string s, string t) {
        // "y#fo##f" ,"y#f#o##f"
        stack<char> st1;
        stack<char> st2;
        for(char i : s){
            if(i == '#'){
                if(!st1.empty())
                    st1.pop();
            }
            else
                st1.push(i);
        }
        for(char j : t){
            if(j == '#'){
                if(!st2.empty())
                    st2.pop();
            }
            else
                st2.push(j);
        }
       string s1 ="";
       string s2 ="";
       while(!st1.empty()){
           s1.push_back(st1.top());
           st1.pop();
       }
        while(!st2.empty()){
           s2.push_back(st2.top());
           st2.pop();
       }
    return s1 == s2;
    }
};