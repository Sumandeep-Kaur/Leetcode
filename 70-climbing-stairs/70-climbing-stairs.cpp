class Solution {
public:
    int climbStairs(int n) {
        if(n <= 2)
            return n;
        
        int oneStep = 2, twoStep = 1, allWays = 0;
        for(int i = 3; i <= n; i++) {
            allWays = oneStep + twoStep;
            twoStep = oneStep;
            oneStep = allWays;
        }
        return allWays;
    }
};