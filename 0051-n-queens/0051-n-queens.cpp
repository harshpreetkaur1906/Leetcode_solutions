class Solution {
public:

    vector<vector<string>> ans;

    void solve(int row, vector<string>& board, vector<int>& col,
               vector<int>& diag1, vector<int>& diag2, int n) {

        if(row == n){
            ans.push_back(board);
            return;
        }

        for(int c = 0; c < n; c++){

            if(col[c] || diag1[row+c] || diag2[row-c+n-1])
                continue;

            board[row][c] = 'Q';
            col[c] = diag1[row+c] = diag2[row-c+n-1] = 1;

            solve(row+1, board, col, diag1, diag2, n);

            board[row][c] = '.';
            col[c] = diag1[row+c] = diag2[row-c+n-1] = 0;
        }
    }

    vector<vector<string>> solveNQueens(int n) {

        vector<string> board(n, string(n,'.'));

        vector<int> col(n,0);
        vector<int> diag1(2*n,0);
        vector<int> diag2(2*n,0);

        solve(0, board, col, diag1, diag2, n);

        return ans;
    }
};