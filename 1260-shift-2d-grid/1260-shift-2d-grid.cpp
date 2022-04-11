class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size(), n = grid[0].size();
        k = k % (m * n);
        if(k == 0)
            return grid;
        
        while(k--) {
            int prev = grid[m - 1][n - 1];
            for(int i = 0; i < m; i++) {
                for(int j = 0; j < n; j++) {
                    swap(grid[i][j], prev);
                }
            }
        }
        
        return grid;
    }
};