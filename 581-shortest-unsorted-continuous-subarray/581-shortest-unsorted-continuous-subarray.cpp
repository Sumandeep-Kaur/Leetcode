class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int mn = INT_MAX, mx = INT_MIN;
        int left = 0, right = nums.size() - 1, start = -1, end = -2;
        
        while(right >= 0) {
            mx = max(mx, nums[left]);
            if(nums[left] < mx)
                end = left;
            
            mn = min(mn, nums[right]);
            if(nums[right] > mn)
                start = right;
            
            left++;
            right--;
        }
        
        return end - start + 1;
    }
};