class Solution {
public:
    void findSubsets(vector<int>& nums, int ind, vector<int>& v, vector<vector<int>>& ans) {
        ans.push_back(v);
        for(int i = ind; i < nums.size(); i++) {
            if(i != ind && nums[i] == nums[i-1])
                continue;
            v.push_back(nums[i]);
            findSubsets(nums, i + 1, v, ans);
            v.pop_back();
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> v;
        sort(nums.begin(), nums.end());
        findSubsets(nums, 0, v, ans);
        return ans;
    }
};