class Solution {
public:
    static bool comparator(const vector<int>& v1, const vector<int>& v2) {
        return v1[2] < v2[2];
    }
    
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n = costs.size();
        for(int i = 0; i < n; i++) {
            costs[i].push_back(costs[i][0] - costs[i][1]);
        }
        
        sort(costs.begin(), costs.end(), comparator);
        
        int minCost = 0;
        for(int i = 0; i < n; i++) {
            if(i < n/2)
                minCost += costs[i][0];
            else
                minCost += costs[i][1];
        }
        
        return minCost;
    }
};