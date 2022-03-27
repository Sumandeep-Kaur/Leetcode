class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int, int>> maxHeap;
        
        for(int i = 0; i < mat.size(); i++) {
            int l = 0, h = mat[0].size() - 1;
            while(l <= h) {
                int mid = (l + h) / 2;
                if(mat[i][mid] == 0)
                    h = mid - 1;
                else
                    l = mid + 1;
            }
            
            maxHeap.push({l, i});
            
            if(maxHeap.size() > k)
                maxHeap.pop();
        }
        
        vector<int> ans;
        while(maxHeap.size() > 0) {
            ans.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};