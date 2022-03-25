class Solution {
public:
    static bool compare(const vector<int>& v1, const vector<int>& v2) {
        return (v1[0] - v1[1]) < (v2[0] - v2[1]);
    }
    
    int twoCitySchedCost(vector<vector<int>>& costs) {
        sort(costs.begin(), costs.end(), compare);
        
        int n = costs.size()/2, minCost = 0;
        for(int i = 0; i < 2*n; i++) {
            if(i < n)
                minCost += costs[i][0];
            else
                minCost += costs[i][1];
        }
        
        return minCost;
    }
};