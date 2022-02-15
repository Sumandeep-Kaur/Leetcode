class Solution {
public:
    void findCombination(vector<int>& candidates, int target, int i, vector<int>& v, vector<vector<int>>& ans) {
        if(target == 0) {
            ans.push_back(v);
            return;
        }
        for(int curri = i; curri < candidates.size(); curri++) {
            if(curri > i && candidates[curri] == candidates[curri - 1])
                continue;
            if(candidates[curri] > target)
                break;
            v.push_back(candidates[curri]);
            findCombination(candidates, target - candidates[curri], curri + 1, v, ans);
            v.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> v;
        sort(candidates.begin(), candidates.end());
        findCombination(candidates, target, 0, v, ans);
        return ans;
    }
};