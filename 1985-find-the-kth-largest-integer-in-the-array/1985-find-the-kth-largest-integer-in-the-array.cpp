class stringCompare {
public:
    bool operator() (string &b, string &a) { 
        if (a.size() != b.size()) 
            return a.size() < b.size();
        return  a < b;
    }
};

class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        priority_queue<string, vector<string>, stringCompare> minHeap;
        for(int i = 0; i < nums.size(); i++) {
            minHeap.push(nums[i]);
            if(minHeap.size() > k)
                minHeap.pop();
        }
        return minHeap.top(); 
    }
};