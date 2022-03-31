class Solution {
public:
    int minLargestSplitSum(vector<int>& sum, vector<vector<int>>& memo, int idx, int subarrayCount) {
        if(memo[idx][subarrayCount] != -1) 
            return memo[idx][subarrayCount];
        
        if(subarrayCount == 1)
            return memo[idx][subarrayCount] = sum[sum.size() - 1] - sum[idx];
        
        int minLargestSum = INT_MAX;
        for(int i = idx; i <= sum.size() - subarrayCount; i++) {
            int firstSplitSum = sum[i + 1] - sum[idx];
            int largestSplitSum = max(firstSplitSum, minLargestSplitSum(sum, memo, i + 1, subarrayCount - 1));
            
            minLargestSum = min(minLargestSum, largestSplitSum);
            
            if(firstSplitSum >= minLargestSum)
                break;
        }
        
        return memo[idx][subarrayCount] = minLargestSum;
    }
    
    int splitArray(vector<int>& nums, int m) {
        int n = nums.size();
        vector<vector<int>> memo(n + 1, vector<int> (m + 1, -1));
        vector<int> sum(n + 1, 0);
        for(int i = 0; i < n; i++) {
            sum[i + 1] = sum[i] + nums[i];
        }
        
        return minLargestSplitSum(sum, memo, 0, m);
    }
};