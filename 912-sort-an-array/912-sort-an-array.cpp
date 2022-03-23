class Solution {
public:
    int partition(vector<int>& nums, int l, int r) {
        int pivot = l;
        l++;
        while (l <= r) { 
            if (nums[l] < nums[pivot]) 
                l++;
            else if (nums[r] >= nums[pivot]) 
                r--;
            else 
                swap(nums[l], nums[r]);
        }
        swap(nums[pivot], nums[r]);
        return r;
    }
    
    void quickSort(vector<int>& nums, int l, int r) {
        if(l >= r)
            return;
        swap(nums[l + rand() % (r - l + 1)], nums[l]);
        int p = partition(nums, l, r);
        quickSort(nums, l, p - 1);
        quickSort(nums, p + 1, r);
    }
    
    vector<int> sortArray(vector<int>& nums) {
        quickSort(nums, 0, nums.size() - 1);
        return nums;
    }
};