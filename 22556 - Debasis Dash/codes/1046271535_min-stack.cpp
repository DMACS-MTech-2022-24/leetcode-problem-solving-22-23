class MinStack {
public:
    stack<int>s,minStack;
    
    
    MinStack() {
        int val;
    }
    
    void push(int val) {
        s.push(val);
        if(minStack.empty() || val <= minStack.top())
            minStack.push(val);
        
    }
    
    void pop() {
        if(!s.empty()){
            if(!minStack.empty() && minStack.top() == s.top())
                minStack.pop();
            s.pop();
        }
    }
    
    int top() {
        return s.top();
        
    }
    
    int getMin() {
        if(!minStack.empty()){
            return minStack.top();
        }
        else 
            return 0;
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