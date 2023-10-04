class Solution {
public:
    string removeOuterParentheses(string s) {
        int depth=0;
        string out;   
        for(const auto &x:s)
        {
            if(not (depth==x-'('))
            {
                out.push_back(x);
            }
            depth+=(x=='(')-(x==')');
        }
        return out;
    }
};