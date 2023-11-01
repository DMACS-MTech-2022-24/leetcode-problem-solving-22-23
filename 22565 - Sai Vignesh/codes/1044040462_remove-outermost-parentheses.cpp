class Solution {
public:
    string removeOuterParentheses(string s) {
        stack <char> stk;
        string final = "";
        int i=0,ln=s.length();
        while(i<ln)
        {
            string tmp;
            do{
                if(s[i] == '(') stk.push(s[i]);
                else stk.pop();
                tmp.push_back(s[i]);
                ++i;
            }while(!stk.empty() && i<ln);
            tmp.erase(tmp.begin()); tmp.pop_back();   // remove first and last character   
            final+=tmp; 
        }
        return final;
        
    }
};