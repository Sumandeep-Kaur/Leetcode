class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0, i = 0;
        while(i < nums.size()) {
            if(nums[i] == val)
                i++;
            else 
                nums[k++] = nums[i++];
        }
        return k;
    }
};