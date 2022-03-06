class Solution {
public:
    int countOrders(int n) {
        long ans = 1, mod = 1e9 + 7;
        
        for(int i = 1; i <= n; i++) {
            // Ways to arrange all n pickup = n! and for n deliveries = (2n-1)
            ans *= i * (2*i - 1);
            ans %= mod;
        }
        
        return ans;
    }
};