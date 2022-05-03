class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int mn = INT_MAX, mx = INT_MIN, start = -1, end = -2;
        for(int i = 0; i < nums.size(); i++) {
            mx = max(mx, nums[i]);
            if(nums[i] < mx)
                end = i;
        }
        
        for(int i = nums.size() - 1; i >= 0; i--) {
            mn = min(mn, nums[i]);
            if(nums[i] > mn)
                start = i;
        }
        
        return end - start + 1;
    }
};