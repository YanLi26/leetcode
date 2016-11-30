class Queue {
public:
    // Push element x to the back of queue.
    void push(int x) {
        stack<int> tmp;
        while(!stackOrigin.empty()){
            tmp.push(stackOrigin.top());
            stackOrigin.pop();
        }
        stackOrigin.push(x);
        while (!tmp.empty()) {
            stackOrigin.push(tmp.top());
            tmp.pop();
        }
    }

    // Removes the element from in front of queue.
    void pop(void) {
        stackOrigin.pop();
    }

    // Get the front element.
    int peek(void) {
        return stackOrigin.top();
    }

    // Return whether the queue is empty.
    bool empty(void) {
        return stackOrigin.empty();
    }
    
private:
    stack<int> stackOrigin;
};