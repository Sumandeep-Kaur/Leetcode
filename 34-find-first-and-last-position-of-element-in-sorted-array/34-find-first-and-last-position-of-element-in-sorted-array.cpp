class Solution {
public:
    int firstOccurence(vector<int>& nums, int low, int high, int target) {
        int first = -1;
        while(low <= high) {
            int mid = (low + high)/2;
            if(target == nums[mid]) {
                first = mid;
                high = mid - 1;
            }
            else if(target < nums[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        return first;
    }
    
    int lastOccurence(vector<int>& nums, int low, int high, int target) {
        int last = -1;
        while(low <= high) {
            int mid = (low + high)/2;
            if(target == nums[mid]) {
                last = mid;
                low = mid + 1;
            }
            else if(target < nums[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        return last;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int first = firstOccurence(nums, low, high, target);
        int last = lastOccurence(nums, low, high, target);
        
        vector<int> res = {first, last};
        return res;
    }
};