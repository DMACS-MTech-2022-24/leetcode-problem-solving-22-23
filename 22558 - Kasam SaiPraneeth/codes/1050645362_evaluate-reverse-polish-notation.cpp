class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        // where an operation is seen pop the top to elements in the stack and do the operation seen
        // if a number is encounted convert it into integer and push into the stack
        // at the end return the stack top
        for(string s: tokens){
            if(s == "+"){
                int top1 = st.top();
                st.pop();
                int top2 = st.top();
                st.pop();
                st.push(top1+top2);
                }
            else if(s == "-"){
                    int top1 = st.top();
                    st.pop();
                    int top2 = st.top();
                    st.pop();
                    st.push(top2-top1);
                }
            else if(s == "*"){
                    int top1 = st.top();
                    st.pop();
                    int top2 = st.top();
                    st.pop();
                    st.push(top2*top1);
                }
            else if(s == "/"){
                    int top1 = st.top();
                    st.pop();
                    int top2 = st.top();
                    st.pop();
                    st.push(top2/top1);
                }
            else{
                st.push(stoi(s));
            }
        }
        return st.top();
    }
};