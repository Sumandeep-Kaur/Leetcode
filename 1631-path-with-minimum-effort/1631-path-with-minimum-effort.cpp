class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int m = heights.size(), n = heights[0].size();
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        
        int dx[] = {-1, 0, 1, 0}, dy[] = {0, 1, 0, -1};
        int minEffort = 0;
        
        pq.push({0, 0});
        while(!pq.empty()) {
            pair<int, int> tp = pq.top();
            pq.pop();
            
            int x = tp.second / 100, y = tp.second % 100;
            
            if(visited[x][y] == true) 
                continue;
            
            visited[x][y] = true;
            
            if(x == m - 1 && y == n - 1) {
                minEffort = tp.first;
                break;
            }
            
            for(int i = 0; i < 4; i++) {
                int nx = x + dx[i], ny = y + dy[i];
                
                int npos = nx * 100 + ny;

	
                if (nx < 0 || nx >= m || ny < 0 || ny >= n || visited[nx][ny] == 1) 
                    continue;
                
                pq.push({max(tp.first, abs(heights[nx][ny] - heights[x][y])), npos});
            }
        }
        
        return minEffort;
    }
};