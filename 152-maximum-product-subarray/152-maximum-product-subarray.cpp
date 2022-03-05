class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxp = nums[0], minp = nums[0], maxProduct = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] < 0)
                swap(maxp, minp);
            
            maxp = max(nums[i], maxp * nums[i]);
            minp = min(nums[i], minp * nums[i]);
            
            maxProduct = max(maxProduct, maxp);
        }
        return maxProduct;
    }
};