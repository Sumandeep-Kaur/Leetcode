class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ones = 0, maxOnes = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0)
                ones = 0;
            else {
                ones++;
                maxOnes = max(maxOnes, ones);
            }
        }
        return maxOnes;
    }
};