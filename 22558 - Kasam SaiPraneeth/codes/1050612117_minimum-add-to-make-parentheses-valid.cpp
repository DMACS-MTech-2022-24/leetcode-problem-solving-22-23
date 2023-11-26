class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        // counts no.of unparied parentheses
        // if ((( is given then all this parentheses goes to stack
        // where as ))) is given then all will be counted,so to make the given
        // parentheses valid ,add the count+st.size
        int count =0;
        for(char c:s){
            if(c =='(')
                st.push(c);
            else if(!st.empty() && c ==')')
                st.pop();
            else
                count++;
            }
        return count+st.size();
    }
};
