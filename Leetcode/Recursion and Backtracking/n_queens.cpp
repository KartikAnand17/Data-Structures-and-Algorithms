// problem -> https://leetcode.com/problems/n-queens/
class Solution {
public:
    unordered_map<int,bool> rowCheck;
    unordered_map<int,bool> upperLeftDiagonalCheck;
    unordered_map<int,bool> bottomLeftDiagonalCheck;

    bool isSafe(int row, int col, vector<vector<char>> &board, int n){

        if(rowCheck[row] == true){
            return false;
        }
        if(upperLeftDiagonalCheck[n-1+col-row] == true){
            return false;
        }
        if(bottomLeftDiagonalCheck[row+col]== true){
            return false;
        }
        return true;
    }

    void storeSolution(vector<vector<char>> &board, int n,vector<vector<string>> &ans){
        vector<string> temp;
        for(int i=0; i<n;i++){
            string output = "";
            for(int j = 0;j<n;j++){
                output.push_back(board[i][j]);
            }
            temp.push_back(output);
        }
        ans.push_back(temp);
    }

    void solve(vector<vector<char>> &board, int col, int n,vector<vector<string>> &ans){
  // base case
    if(col>=n){
        storeSolution(board,n,ans);
        return;
    }
    // one case and rest will be handled by recursion
    for(int row = 0; row<n; row++){
        if(isSafe(row,col,board,n)){
        board[row][col] = 'Q';
        rowCheck[row] = true;
        upperLeftDiagonalCheck[n-1+col-row] = true;
        bottomLeftDiagonalCheck[row+col] = true;
        // recursive call
        solve(board,col+1,n, ans);
        //backtracking
        board[row][col] = '.';
        rowCheck[row] = false;
        upperLeftDiagonalCheck[n-1+col-row] = false;
        bottomLeftDiagonalCheck[row+col] = false; 
        }
    }
}
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<char>> board(n,vector<char>(n,'.'));
        vector<vector<string>> ans;
        int col = 0;
        solve(board,col,n,ans);
        return ans;
    }
};
