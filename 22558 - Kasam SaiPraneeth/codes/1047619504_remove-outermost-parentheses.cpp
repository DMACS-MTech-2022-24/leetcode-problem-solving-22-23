class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> stack;
        string ans ="";
        int len = s.length(), i = 0;
        while(i<len){
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
            i++;
            }
    return ans;
    }
};