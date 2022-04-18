class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(int num : nums) {
            mp[num]++;
        }
        
        int pairs = 0;
        for(auto it : mp) {
            if(k == 0) {
                if(it.second > 1)
                    pairs++;
            }
            else {
                if(mp.find(it.first + k) != mp.end())
                    pairs++;
            }
        }
        
        return pairs;
    }
};