class FreqStack {
public:
    unordered_map<int, int> freq;
    unordered_map<int, stack<int>> mp;
    int maxFreq = 0;
    FreqStack() {
        
    }
    
    void push(int val) {
        freq[val]++;
        maxFreq = max(maxFreq, freq[val]);
        mp[freq[val]].push(val);
    }
    
    int pop() {
        int x = mp[maxFreq].top();
        mp[maxFreq].pop();
        if (mp[freq[x]--].size() == 0) 
            maxFreq--;
        return x;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */