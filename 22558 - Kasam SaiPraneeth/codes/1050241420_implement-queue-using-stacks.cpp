class MyQueue {
public:
stack<int> st1;
stack<int> st2;
    MyQueue() {
        
    }
    // stack 2 contain the correct order as FIFO, to do this iam using 2nd stack
    // to take the 1 element in the qeaue on the top of the stack
    void push(int x) {
        while(!st2.empty()){
            st1.push(st2.top());
            st2.pop();
        }
        st1.push(x);

        while(!st1.empty()){
            st2.push(st1.top());
            st1.pop();
        }
    }
    // returing the front(top) element in the queue and removing it form stack
    int pop() {
        int top = st2.top();
        st2.pop();
        return top;
    }
    
    int peek() {
        return st2.top();
    }
    
    bool empty() {
        return st2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */