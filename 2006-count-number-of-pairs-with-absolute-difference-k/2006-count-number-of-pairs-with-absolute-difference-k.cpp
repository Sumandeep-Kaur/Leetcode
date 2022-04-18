class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int pairs = 0;
        unordered_map<int, int> mp;
        for(int num : nums) {
            pairs += mp[num + k] + mp[num - k];
            mp[num]++;
        }
        
        return pairs;
    }
};