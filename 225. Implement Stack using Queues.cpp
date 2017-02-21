class MyStack {
public:
    /** Initialize your data structure here. */
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        queue<int> tmp;
        while(!myStack.empty()){
            tmp.push(myStack.front());
            myStack.pop();
        }
        myStack.push(x);
        while(!tmp.empty()){
            myStack.push(tmp.front());
            tmp.pop();
        }
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int element;
        element = myStack.front();
        myStack.pop();
        return element;
    }
    
    /** Get the top element. */
    int top() {
        return myStack.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return myStack.empty();
    }
private:
    queue<int> myStack;
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * bool param_4 = obj.empty();
 */