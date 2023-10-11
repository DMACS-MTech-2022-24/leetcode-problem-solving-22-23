class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int top1,top2;
        // where an operation is seen pop the top to elements in the stack and do the operation seen
        // if a number is encounted convert it into integer and push into the stack
        // at the end return the stack top
        
        for(string s: tokens){
            switch(s[0]){
                case '+':
                    top1 = st.top();
                    st.pop();
                    top2 = st.top();
                    st.pop();
                    st.push(top1+top2);
                    break;
                case '-':
                    if(s.size()==1){
                    top1 = st.top();
                    st.pop();
                    top2 = st.top();
                    st.pop();
                    st.push(top2-top1);
                    }
                    else goto d;
                    break;
                case '*':
                    top1 = st.top();
                    st.pop();
                    top2 = st.top();
                    st.pop();
                    st.push(top2*top1);
                    break;
                case '/':
                    top1 = st.top();
                    st.pop();
                    top2 = st.top();
                    st.pop();
                    st.push(top2 / top1);
                    break;
                default:
                    d:
                       st.push(stoi(s));
                }
        }
        return st.top();
    }
};