class Solution {
public:
    int climbStairs(int n) {
        int oneStep = 1, twoStep = 1;
        for(int i = 2; i <= n; i++) {
            int allWays = oneStep + twoStep;
            oneStep = twoStep;
            twoStep = allWays;
        }
        return twoStep;
    }
};