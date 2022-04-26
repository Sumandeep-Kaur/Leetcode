class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size(), edgesRequired = n - 1, minCost = 0, i = 0;
        vector<bool> visited(n, 0);
        priority_queue<pair<int, int>> pq;
        while(edgesRequired-- > 0) {
            visited[i] = true;
            for(int j = 0; j < n; j++) {
                if(visited[j] == 0) {
                    pq.push({-(abs(points[i][0] - points[j][0]) + abs(points[i][1] - points[j][1])), j});
                }
            }
            while(visited[pq.top().second]) {
                pq.pop();
            }
            
            minCost -= pq.top().first;
            i = pq.top().second;
            pq.pop();
        }
        
        return minCost;
    }
};