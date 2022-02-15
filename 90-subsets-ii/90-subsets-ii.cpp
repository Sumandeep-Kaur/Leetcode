class Solution {
public:
    void findSubsets(vector<int>& nums, int index, vector<int>& v, vector<vector<int>>& ans) {
        if(index == nums.size()) {
            ans.push_back(v);
            return;
        }
        int i = index + 1;
        while(i < nums.size() && nums[i] == nums[index]) 
            i++;
        findSubsets(nums, i, v, ans);
        
        v.push_back(nums[index]);
        findSubsets(nums, index + 1, v, ans);
        v.pop_back();
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> v;
        sort(nums.begin(), nums.end());
        findSubsets(nums, 0, v, ans);
        return ans;
    }
};