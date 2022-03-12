class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int> (n, 0));
        int rowStart = 0, rowEnd = n - 1, colStart = 0, colEnd = n - 1, num = 1;
        
        while(rowStart <= rowEnd && colStart <= colEnd) {
            for(int col = colStart; col <= colEnd; col++) 
                matrix[rowStart][col] = num++;
            rowStart++;
            
            for(int row = rowStart; row <= rowEnd; row++) 
                matrix[row][colEnd] = num++;
            colEnd--;
            
            for(int col = colEnd; col >= colStart; col--) 
                matrix[rowEnd][col] = num++;
            rowEnd--;
            
            for(int row = rowEnd; row >= rowStart; row--) 
                matrix[row][colStart] = num++;
            colStart++;
        }
                       
        return matrix;
    }
};