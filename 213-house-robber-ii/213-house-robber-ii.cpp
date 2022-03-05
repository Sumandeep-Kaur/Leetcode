class Solution {
public:
    int robHouse(vector<int>& nums, int start, int end) {
        int twoBack = 0, oneBack = nums[start]; 
        
        for(int i = start + 1; i <= end; i++) {
            int loot = max(oneBack, twoBack + nums[i]);
            twoBack = oneBack;
            oneBack = loot;
        }
        
        return oneBack; 
    }
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)
            return nums[0];
        
        return max(robHouse(nums, 0, n-2), robHouse(nums, 1, n-1));
    }
};