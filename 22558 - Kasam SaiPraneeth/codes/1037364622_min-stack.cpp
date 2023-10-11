class MinStack {
public:
stack<int>stack,minstack;
// creating two stack,1 for storing minimun val and other for storing all other values
    MinStack() {
    }

    void push(int val) {
        stack.push(val); // push every element into stack
    // initially ministack is empty so push the first element,next val is compared with the top of
    // ministack val and push
        if(minstack.empty() || val <= minstack.top()){
                minstack.push(val);
            }
    }
    // if the top of the minstack and stack are same, then pop the top of ministack and the stack,
    // if not same just pop the val in stack
    void pop() {
        if(stack.top() == minstack.top()){
            minstack.pop();
            }
        stack.pop();
    }
    // return the stack top
    int top() {
        return stack.top();
    }
    // return the minstack
    int getMin() {
        return minstack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */