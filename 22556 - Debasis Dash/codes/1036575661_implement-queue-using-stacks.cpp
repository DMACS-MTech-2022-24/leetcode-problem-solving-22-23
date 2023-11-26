class MyQueue {
public:
    stack<int> q1;
    stack<int> q2; 
    MyQueue() {
         
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        if (q1.size() == 0)
            return NULL;

        while(q1.size() != 1){
            q2.push(q1.top());
            q1.pop();
        }

        int popElement = q1.top();
        q1.pop();
        
        while(q2.size() != 0){
            q1.push(q2.top());
            q2.pop();
        }
        return popElement;
    }
    
    int peek() {
        if (q1.size() == 0)
            return NULL;
        
        while(q1.size() != 1){
            q2.push(q1.top());
            q1.pop();
        }
        int peekElement = q1.top();
        q2.push(q1.top());
        q1.pop();
        
        while(q2.size() != 0){
            q1.push(q2.top());
            q2.pop();
        }
        return peekElement;
        
    }
    
    bool empty() {
        if (q1.size() == 0)
            return true;
        else 
            return false;
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