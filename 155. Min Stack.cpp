class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int x) {
        myStack.push(x);
        if(minStack.empty() || x <= minStack.top()) minStack.push(x);
    }
    
    void pop() {
        if(myStack.top() == minStack.top()) minStack.pop();
        myStack.pop();
    }
    
    int top() {
        return myStack.top();
    }
    
    int getMin() {
        return minStack.top();
    }
private:
     stack<int> myStack, minStack;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */