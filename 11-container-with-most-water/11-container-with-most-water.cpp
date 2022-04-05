class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0, waterTrapped = 0;
        int i = 0, j = height.size() - 1;
        while(i < j) {
            area = (j - i) * min(height[i], height[j]);
            waterTrapped = max(waterTrapped, area);
            
            if(height[i] < height[j])
                i++;
            else
                j--;
        }
        
        return waterTrapped;
    }
};