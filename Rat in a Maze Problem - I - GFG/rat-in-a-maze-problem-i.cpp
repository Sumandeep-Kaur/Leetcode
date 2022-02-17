// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:

    void solve(vector<vector<int>>& matrix, int n, int row, int col, string s, vector<string>& ans) 
    {
        if(row == n - 1 && col == n - 1) {
            ans.push_back(s);
            return;
        }
        int drow[] = {1, 0, 0, -1};
        int dcol[] = {0, -1, 1, 0};
        string dir = "DLRU";
        for(int i = 0; i < 4; i++) {
            int nextRow = row + drow[i], nextCol = col + dcol[i];
            if(nextRow >= 0 && nextRow < n && nextCol >= 0 && nextCol < n && matrix[nextRow][nextCol] == 1) {
                matrix[row][col] = 2;
                solve(matrix, n, nextRow, nextCol, s + dir[i], ans);
                matrix[row][col] = 1;
            }
        }
        /*
        //Down
        if (row + 1 < n && matrix[row + 1][col] == 1) {
            matrix[row][col] = 2;
            solve(matrix, n, row + 1, col, s + 'D', ans);
            matrix[row][col] = 1;
        }
        //Left
        if (col - 1 >= 0 && matrix[row][col - 1] == 1) {
            matrix[row][col] = 2;
            solve(matrix, n, row, col - 1, s + 'L', ans);
            matrix[row][col] = 1;
        }
        //Right
        if (col + 1 < n && matrix[row][col + 1] == 1) {
            matrix[row][col] = 2;
            solve(matrix, n, row, col + 1, s + 'R', ans);
            matrix[row][col] = 1;
        }
        //Up
        if (row - 1 >= 0 && matrix[row - 1][col] == 1) {
            matrix[row][col] = 2;
            solve(matrix, n, row - 1, col, s + 'U', ans);
            matrix[row][col] = 1;
        }
        */
    }
    
    vector<string> findPath(vector<vector<int>>& matrix, int n) {
        vector<string> ans;
        vector<vector<int>> vis(n, vector<int> (n, 0));
        if(matrix[0][0] == 1)
            solve(matrix, n, 0, 0, "", ans);
        return ans;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends