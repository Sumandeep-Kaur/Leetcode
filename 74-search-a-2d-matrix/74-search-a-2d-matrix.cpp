class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size(), col = matrix[0].size();
        int low = 0, mid, high = row*col - 1;
        while(low <= high) {
            mid = (low + high)/2;
            if(matrix[mid/col][mid%col] == target)
                return true;
            else if(matrix[mid/col][mid%col] > target)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return false;
    }
};