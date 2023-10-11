class MinStack {
public:
    stack<int>s1,min_st; // we created 2 stack (1st stack is normal,min_st.top() always having minimun element)
    MinStack() {
        int val;
    }
    void push(int val) {
        // for normal stack, val will be always push
        s1.push(val);
        // for min stack(min_st), val will be push in below case
        if(min_st.empty() || val <= min_st.top()){
            min_st.push(val);
        }
    }
    void pop() {
        // pop and push operation will be alwayas from s1 stack
        if(s1.top()== min_st.top()){ //if min_st ka top,s1 top ke equal h to dono stack se pop
           min_st.pop();
        }
        s1.pop(); 
    }
    
    int top() {
        return s1.top();
    }
    
    int getMin() {
        //min. val having always with min_st.top()
        return min_st.top();
    }
    
};