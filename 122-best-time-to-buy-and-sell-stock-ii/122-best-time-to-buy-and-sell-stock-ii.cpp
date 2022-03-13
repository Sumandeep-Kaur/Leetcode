class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy, sell, profit = 0, n = prices.size();
        for(int i = 0; i < n; i++) {
            while(i + 1 < n && prices[i] >= prices[i+1])
                i++;
            buy = prices[i];
            
            while(i + 1 < n && prices[i] < prices[i + 1])
                i++;
            sell = prices[i];
            
            profit += sell - buy;
        }
        
        return profit;
    }
};