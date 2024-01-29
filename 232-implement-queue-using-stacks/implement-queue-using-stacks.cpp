class MyQueue {
public:
        stack<int> q1;
        stack<int> q2;
    MyQueue() {
        
    }
    
    void push(int x) {
         while(!q1.empty()){
            q2.push(q1.top());
            q1.pop();
        }
        q1.push(x);
        while(!q2.empty()){
            q1.push(q2.top());
            q2.pop();
        }
    }
    
    int pop() {
         if(!q1.empty()){
            int k=q1.top();
            q1.pop();
            return k; 
       }
       return -1;
    }
    
    int peek() {
        return q1.top();
    }
    
    bool empty() {
        return (q1.empty());
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