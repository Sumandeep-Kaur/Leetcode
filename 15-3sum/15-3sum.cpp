class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        vector<vector<int>> res;
        for(int i = 0; i < n - 2; i++) {
            int start = i + 1, end = n - 1;
            while(start < end) {
                if(nums[start] + nums[end] == -nums[i]) {
                    vector<int> v;
                    v.push_back(nums[i]);
                    v.push_back(nums[start]);
                    v.push_back(nums[end]);
                    res.push_back(v);
                    
                    while(start < end && nums[start] == nums[start+1])
                        start++;
                    
                    while(start < end && nums[end] == nums[end-1])
                        end--;
                    
                    start++;
                    end--;
                }
                else if(nums[start] + nums[end] > -nums[i]) 
                    end--;
                else
                    start++;
                
            }
            while(i + 1 < n && nums[i] == nums[i+1])
                    i++;
        }
        return res;
    }
};