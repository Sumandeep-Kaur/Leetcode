class Solution {
public:
    bool isValid(int row, int col, char c, vector<vector<char>>& board) {
      for(int i = 0; i < 9; i++) {
        if (board[i][col] == c && i != row)
          return false;

        if (board[row][i] == c && i != col)
          return false;

        if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c && (3* (row / 3) + i / 3) != row && ( 3 * (col / 3) + i % 3) != col)
          return false;
      }
      return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                if(board[i][j] != '.' && !isValid(i, j, board[i][j], board))
                    return false;
            }
        }
        return true;
    }
};