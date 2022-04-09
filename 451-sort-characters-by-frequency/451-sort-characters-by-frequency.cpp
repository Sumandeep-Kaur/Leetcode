class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        for(int i = 0; i < s.length(); i++) {
            mp[s[i]]++;
        }
        
        vector<vector<char>> buckets (s.length() + 1);
        for(auto i : mp) {
            buckets[i.second].push_back(i.first);
        }
        
        string str = "";
        for(int i = buckets.size() - 1; i >= 0; i--) {
            for(int j = 0; j < buckets[i].size(); j++) {
                for(int k = 1; k <= i; k++)
                    str += buckets[i][j];
            }
        }
        
        return str;
    }
};