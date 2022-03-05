class Solution {
public:
    int rob(vector<int>& nums) {
        int twoBack = 0, oneBack = nums[0]; 
        
        for(int i = 1; i < nums.size(); i++) {
            int loot = max(oneBack, twoBack + nums[i]);
            twoBack = oneBack;
            oneBack = loot;
        }
        
        return oneBack; 
    }
};