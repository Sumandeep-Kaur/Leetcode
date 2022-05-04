class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int pairs = 0, low = 0, high = nums.size() - 1;
        sort(nums.begin(), nums.end());
        
        while(low < high) {
            if(nums[low] + nums[high] == k) { 
                pairs++;
                low++;
                high--;
            }
            else if(nums[low] + nums[high] < k)
                low++;
            else
                high--;
        }
        
        return pairs;
    }
};