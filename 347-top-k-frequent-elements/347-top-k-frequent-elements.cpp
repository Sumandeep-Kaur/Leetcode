class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(int num : nums) {
            mp[num]++;
        }
        
        vector<vector<int>> buckets (nums.size() + 1);
        for(auto i : mp) {
            buckets[i.second].push_back(i.first);
        }
        
        vector<int> ans;
        for(int i = buckets.size() - 1; i >= 0; i--) {
            for(int j = 0; j < buckets[i].size(); j++) {
                ans.push_back(buckets[i][j]);
                if(ans.size() == k)
                    return ans;
            }
        }
        
        return ans;
    }
};