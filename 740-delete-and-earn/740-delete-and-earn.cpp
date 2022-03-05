class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        unordered_map<int, int> mp;
        int maxNum = 0;
        
        for(auto i : nums) {
            mp[i] += i;
            maxNum = max(maxNum, i);
        }
        
        int twoBack = 0, oneBack = mp[1];
        
        for(int i = 2; i <= maxNum; i++) {
            int gain = max(oneBack, twoBack + mp[i]);
            twoBack = oneBack;
            oneBack = gain;
        }
        
        return oneBack;
    }
};