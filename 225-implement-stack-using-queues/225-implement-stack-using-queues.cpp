class MyStack {
public:
    queue<int> main, temp;
    MyStack() {
        
    }
    
    void push(int x) {
        temp.push(x);
        while(!main.empty()) {
            temp.push(main.front());
            main.pop();
        }
        while(!temp.empty()) {
            main.push(temp.front());
            temp.pop();
        }
    }
    
    int pop() {
        int x = main.front();
        main.pop();
        return x;
    }
    
    int top() {
        return main.front();
    }
    
    bool empty() {
        return main.empty();
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