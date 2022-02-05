class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if(n == 0 || n == 1 || n == 2)
            return 0;
        
        int left = 0, right = n - 1;
        int maxLeft = 0, maxRight = 0, waterTrapped = 0;
        
        while(left < right) {
            if(height[left] <= height[right]) {
                if(maxLeft <= height[left])
                    maxLeft = height[left];
                else
                    waterTrapped += maxLeft - height[left];
                
                left++;
            }
            else {
                if(maxRight <= height[right])
                    maxRight = height[right];
                else
                    waterTrapped += maxRight - height[right];
                
                right--;
            }
        }
        
        return waterTrapped;
    }
};