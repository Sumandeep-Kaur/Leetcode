class Solution {
public:
    void permutations(vector<int> nums, int i, vector<vector<int>>& ans) {
        if(i == nums.size()) {
            ans.push_back(nums);
            return;
        }    
        for(int j = i; j < nums.size(); j++) {
            if(j == i || nums[j] != nums[i]) {
                swap(nums[i], nums[j]);
                permutations(nums, i + 1, ans);
            }
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        permutations(nums, 0, ans);
        return ans;
    }
};