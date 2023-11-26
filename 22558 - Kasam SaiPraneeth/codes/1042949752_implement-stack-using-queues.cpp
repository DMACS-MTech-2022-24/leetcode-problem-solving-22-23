class MyStack {
public:
queue<int> q1, q2;
    MyStack() {
    }
    
    void push(int x) {
        // push the new element into the q2 queue
        q2.push(x);

        // this is loop is usefull for keping the latest element in the top
        // so this second queue is used for doing this thing
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1, q2);
    }
    
    int pop() {
        int f = q1.front();
        q1.pop();
        return f;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        return q1.empty(); 
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */