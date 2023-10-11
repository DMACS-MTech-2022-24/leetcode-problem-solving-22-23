class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> stack;
        string ans ="";
        int len = s.length();
        for(int i =0; i<len ; i++){
            if(s[i] == '('){
                if(!stack.empty()){
                    ans.push_back(s[i]);
                    }
                stack.push(s[i]);
                }
            else{
                stack.pop();
                if(!stack.empty()){
                    ans.push_back(s[i]);
                    }
                }
            }
    return ans;
    }
};