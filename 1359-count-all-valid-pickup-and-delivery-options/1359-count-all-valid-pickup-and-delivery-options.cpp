class Solution {
public:
    long totalWays(int unpicked, int undelivered, vector<vector<int>>& dp) {
        if(unpicked == 0 && undelivered == 0)
            return 1;
        if(unpicked < 0 || undelivered < 0 || undelivered < unpicked)
            return 0;
        
        if(dp[unpicked][undelivered] != 0)
            return dp[unpicked][undelivered];
        
        long ans = 0, mod = 1e9 + 7;
        ans += unpicked * totalWays(unpicked - 1, undelivered, dp);
        ans += (undelivered - unpicked) * totalWays(unpicked, undelivered - 1, dp);
        ans %= mod;
        
        return dp[unpicked][undelivered] = ans;
    }
    int countOrders(int n) {
        vector<vector<int>> dp(n + 1, vector<int> (n + 1, 0));
        return totalWays(n, n, dp);
    }
};