class MinStack {
public:
    stack<int> st;
    stack<int> minStack;
    
    MinStack() {

    }
    
    void push(int val) {
        if(st.empty())  
            minStack.push(val);
        else  {
            if(val <= minStack.top())
                minStack.push(val);
        }
        st.push(val);
    }
    
    void pop() {
        int t = st.top();
        st.pop();
        if(t == minStack.top())
            minStack.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minStack.top();
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