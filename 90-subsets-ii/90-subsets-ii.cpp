class Solution {
public:
    void findSubsets(vector<int>& nums, int i, vector<int> v, set<vector<int>>& ans) {
        if(i == nums.size()) {
            sort(v.begin(), v.end());
            ans.insert(v);
            return;
        }
        
        v.push_back(nums[i]);
        findSubsets(nums, i + 1, v, ans);
        
        v.pop_back();
        findSubsets(nums, i + 1, v, ans);
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> ans;
        vector<int> v;
        findSubsets(nums, 0, v, ans);
        
        vector<vector<int>> res;
        for(auto i = ans.begin(); i != ans.end(); i++)
            res.push_back(*i);
    
        return res;
    }
};