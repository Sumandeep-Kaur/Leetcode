class Solution {
public:
    bool isEvenCycle(int node, vector<int>& color, vector<vector<int>>& adj) {
        queue<int> q;
        q.push(node);
        color[node] = 1;
        while(!q.empty()) {
            int curr = q.front();
            q.pop();
            for(int ele : adj[curr]) {
                if(color[ele] == color[curr]) //Odd-cycle
                    return false;
                if(color[ele] == -1) {  
                    color[ele] = 1 - color[curr];
                    q.push(ele);
                }
            }
        }
        return true;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        //Only even cycle edge length will be bipartite     
        int n = graph.size();
        vector<int> color(n, -1);
        for(int i = 0; i < n; i++) { 
            if(color[i] == -1 && !isEvenCycle(i, color, graph))
                return false;
        }
        
        return true;
    }
};