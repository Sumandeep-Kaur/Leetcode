class Solution {
public:
    void combine(int i, int n, int k, vector<int>& v, vector<vector<int>>& ans) {
        if(v.size() == k) {
            ans.push_back(v);
            return;
        }    
        for(int num = i; num <= n; num++) {
            v.push_back(num);
            combine(num + 1, n, k, v, ans);
            v.pop_back();
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> v;
        combine(1, n, k, v, ans);
        return ans;
    }
};