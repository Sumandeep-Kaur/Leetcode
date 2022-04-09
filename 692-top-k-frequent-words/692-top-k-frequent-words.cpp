class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> mp;
        for(string word : words) 
            mp[word]++;
        
        auto comp = [](const pair<string, int> &a, const pair<string, int> &b)->bool {
            if(a.second == b.second) 
                return a.first > b.first;
            else 
                return a.second < b.second;
        };
        priority_queue<pair<string, int>, vector<pair<string, int>>, decltype(comp)> minHeap(comp);
        
        for(auto p : mp) { 
            minHeap.push(p);
        }
        
        vector<string> ans;
        while(k--) {
            ans.push_back(minHeap.top().first);
            minHeap.pop();
        }
        
        return ans;
    }
};