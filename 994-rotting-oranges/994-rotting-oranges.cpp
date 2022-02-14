class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {        
        int totalOranges = 0, rottenOranges = 0, time = 0;
        queue<pair<int, int>> q;
        
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[0].size(); j++) {
                if(grid[i][j] != 0)
                    totalOranges++;
                if(grid[i][j] == 2)
                    q.push({i, j});
            }
        }
        
        int dx[] = {0, 0, 1, -1};
        int dy[] = {1, -1, 0, 0};
        
        while(!q.empty()) {
            int n = q.size();
            rottenOranges += n;
            while(n--) {
                int x = q.front().first, y = q.front().second;
                q.pop();
                for(int i = 0; i < 4; ++i){
                    int nx = x + dx[i], ny = y + dy[i];
                    if(nx < 0 || ny < 0 || nx >= grid.size() || ny >= grid[0].size() || grid[nx][ny] != 1)
                        continue;
                    grid[nx][ny] = 2;
                    q.push({nx, ny});
                }
            }
            if(!q.empty())
                time++;
        }
        
        if(totalOranges == rottenOranges)
            return time;
        else
            return -1;
    }
};