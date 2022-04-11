class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size(), n = grid[0].size();
        k = k % (m * n);
        if(k == 0)
            return grid;
        
        while(k--) {
            int first = grid[m - 1][n - 1];
            for(int i = m - 1; i >= 0; i--) {
                for(int j = n - 1; j > 0; j--) {
                    grid[i][j] = grid[i][j - 1];
                }
                if(i - 1 >= 0)
                    grid[i][0] = grid[i - 1][n - 1];
            }
            grid[0][0] = first;
        }
        
        return grid;
    }
};