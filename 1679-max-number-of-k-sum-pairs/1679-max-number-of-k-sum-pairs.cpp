class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int ans = 0;
        unordered_map<int, int> mp;
        for(auto num : nums) {
            int target = k - num;
            if(mp[target] > 0) {
                ans++;
                mp[target]--;
            }
            else 
                mp[num]++;
        }
        
        return ans;
    }
};