class Solution {
public:
    bool isSafe(int n, int row, int col, vector<string>& board) {
        //upper same column check
        for(int i = row - 1; i >= 0; i--){
            if(board[i][col] == 'Q')
                return false;
        }
        //left diagonal check
        for(int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--){
            if(board[i][j] == 'Q')
                return false;
        }
        //right diagonal check
        for(int i = row - 1, j = col + 1; i >= 0 && j <= n; i--, j++){
            if(board[i][j] == 'Q')
                return false;
        }
        return true;
    }
    
    void solve(int n, int row, vector<string>& board, vector<vector<string>>& ans) {
        if(row == n) {
            ans.push_back(board);
            return;
        }
        for(int i = 0; i < n; i++) {
            if(isSafe(n, row, i, board)) {
                board[row][i] = 'Q';
                solve(n, row + 1, board, ans);
                board[row][i] = '.';
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        int t = n;
        string s = "";
        while(t--)
            s += '.';
        
        vector<vector<string>> ans;
        vector<string> board;
        for(int i = 0; i < n; i++)
            board.push_back(s);
        
        solve(n, 0, board, ans);
        return ans;
    }
};