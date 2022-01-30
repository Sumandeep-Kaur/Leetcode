class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        int n = nums.size(); 
        sort(nums.begin(),nums.end());
    
        for (int i = 0; i < n; i++) {
            int target1 = target - nums[i];
            for (int j = i + 1; j < n; j++) {
                int target2 = target1 - nums[j];
                int left = j + 1, right = n - 1; 
                while(left < right) {
                    int two_sum = nums[left] + nums[right];
                
                    if (two_sum < target2) left++;
                
                    else if (two_sum > target2) right--;
                
                    else {
                        vector<int> quadruplet;
                        quadruplet.push_back(nums[i]);
                        quadruplet.push_back(nums[j]);
                        quadruplet.push_back(nums[left]);
                        quadruplet.push_back(nums[right]);
                        res.push_back(quadruplet);
                    
                        while (left < right && nums[left] == quadruplet[2]) 
                            left++;
                    
                        while (left < right && nums[right] == quadruplet[3]) 
                            right--;
                    }
                }
                
                while(j + 1 < n && nums[j + 1] == nums[j]) 
                    j++;
            }
        
            while (i + 1 < n && nums[i + 1] == nums[i])
                i++;
        
        }
    
        return res;
    }
};