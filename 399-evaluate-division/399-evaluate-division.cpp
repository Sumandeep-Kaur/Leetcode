class Solution {
public:
    double dfs(string start, string end, unordered_map<string, unordered_map<string, double>>& graph, unordered_set<string> visited) {
        if(graph.find(start) == graph.end())
            return -1;
        
        if(graph[start].find(end) != graph[start].end())
            return graph[start][end];
        
        for(auto it : graph[start]) {
            if(find(visited.begin(), visited.end(), it.first) != visited.end()) 
                continue;
            
            visited.insert(it.first);
            double res = dfs(it.first, end, graph, visited);
            if(res != -1.0)
                return graph[start][it.first] * res;
        }
        
        return -1;
    }
    
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        unordered_map<string, unordered_map<string, double>> graph;
        for(int i = 0; i < equations.size(); i++) {
            string num = equations[i][0], den = equations[i][1];
            graph[num][num] = 1.0;
            graph[den][den] = 1.0;
            graph[num][den] = values[i];
            graph[den][num] = 1.0/values[i];
        }
        
        vector<double> ans;
        unordered_set<string> visited;
        
        for(int i = 0; i < queries.size(); i++) {
            string num = queries[i][0], den = queries[i][1];
            visited = {num};
            ans.push_back(dfs(num, den, graph, visited));
        }
        
        return ans;
    }
};