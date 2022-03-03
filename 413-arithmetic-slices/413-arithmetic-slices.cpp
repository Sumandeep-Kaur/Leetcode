class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size() < 3)
            return 0;
        
        int totalCount = 0, curCount = 0;
        for(int i = 1; i < nums.size() - 1; i++) {
            if(nums[i] - nums[i-1] == nums[i+1] - nums[i])
                curCount++;
            else
                curCount = 0;
            
            totalCount += curCount;
        }
        
        return totalCount;
    }
};