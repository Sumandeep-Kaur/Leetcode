class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int left = INT_MIN, right = 0;
        for(int i = 0; i < weights.size(); i++) {
            left = max(left, weights[i]);
            right += weights[i];
        }
        
        while(left < right) {
            int mid = (left + right) / 2;
            int daysNeed = 1, currCapacity = 0;
            for(int w : weights) {
                currCapacity += w;
                if(currCapacity > mid) {
                    daysNeed++;
                    currCapacity = w;
                }
            }
            
            if(daysNeed > days) 
                left = mid + 1;
            else
                right = mid;
        }
        
        return left;
    }
};