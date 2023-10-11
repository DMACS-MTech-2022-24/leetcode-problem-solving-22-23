class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> bracs;
        string result = "";
        int i = 0;

        while (i < s.length()) {
            if (s[i] == '(') {
                if (!bracs.empty()) {
                    result.push_back(s[i]);
                }
                bracs.push(s[i]);
            } else if (s[i] == ')') {
                bracs.pop();
                if (!bracs.empty()) {
                    result.push_back(s[i]);
                }
            }
            i++;
        }
        return result;
    }
};
