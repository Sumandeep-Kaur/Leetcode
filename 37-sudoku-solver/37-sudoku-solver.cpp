class Solution {
public:
    bool isValid(int row, int col, char c, vector<vector<char>>& board) {
      for(int i = 0; i < 9; i++) {
        if (board[i][col] == c)
          return false;

        if (board[row][i] == c)
          return false;

        if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c)
          return false;
      }
      return true;
    }

    bool solve(vector<vector<char>>& board, int i, int j){
        if(i == 9)
           return true;
        if(j == 9)
            return solve(board, i+1, 0);
        
        if(board[i][j] != '.')
            return solve(board, i, j+1);
        else {
            for(char c = '1'; c <= '9'; c++){
                if(isValid(i, j, c, board)){
                    board[i][j] = c;
                    if(solve(board, i, j+1))
                        return true;
                    board[i][j] = '.';
                }
            }
        }
        return false;
    }
    
    void solveSudoku(vector<vector<char>>& board) {
        solve(board, 0, 0);
    }
};