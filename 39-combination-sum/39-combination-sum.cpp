class Solution {
public:
    void findCombination(vector<int>& candidates, int target, int i, vector<int>& v, vector<vector<int>>& ans) {
        if(i == candidates.size()) {
            if(target == 0) 
                ans.push_back(v);
            return;
        }
        if(candidates[i] <= target) { 
            v.push_back(candidates[i]);
            findCombination(candidates, target - candidates[i], i, v, ans);
            v.pop_back();
        }
        findCombination(candidates, target, i + 1, v, ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> v;
        findCombination(candidates, target, 0, v, ans);
        return ans;
    }
};