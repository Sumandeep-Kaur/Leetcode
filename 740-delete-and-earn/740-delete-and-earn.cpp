class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        unordered_map<int, int> mp;
        int maxNum = 0;
        
        for(auto i : nums) {
            mp[i] += i;
            maxNum = max(maxNum, i);
        }
        
        vector<int> maxPoints(maxNum + 1, 0);
        maxPoints[1] = mp[1];
        
        for(int i = 2; i <= maxNum; i++) {
            maxPoints[i] = max(maxPoints[i-1], maxPoints[i-2] + mp[i]);
        }
        
        return maxPoints[maxNum];
    }
};