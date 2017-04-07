// reference: http://www.cnblogs.com/grandyang/p/4421852.html
class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        SodokuDFS(board, 0, 0);
    }
    bool isValid(vector<vector<char>>& board, int row, int col){
        // row is valid
        for(int i = 0; i < board.size(); i++){
            if(board[i][col] == board[row][col] && i != row) return false;
        }
        // column is valid
        for(int i = 0; i < board[row].size(); i++){
            if(board[row][i] == board[row][col] && i != col) return false;
        }
        // matrix is valid
        for(int i = row/3*3; i < row/3*3+3; i++){
            for(int j = col/3*3; j < col/3*3+3; j++){
                if(board[row][col] == board[i][j] && row != i && col != j) return false;
            }
        }
        return true;
    }
    bool SodokuDFS(vector<vector<char>>& board, int row, int col){
        if(row == board.size()) return true;
        if(col >= board[row].size()) return SodokuDFS(board, row+1, 0);
        if(board[row][col] != '.') return SodokuDFS(board, row, col+1);
        else{
            for(int i = 1; i < 10; i++){
                board[row][col] = (char)(i+'0');
                if(isValid(board, row, col)){
                    if(SodokuDFS(board, row, col+1)) return true;
                }
                board[row][col] = '.';
            }
        }
        return false;
    }
};