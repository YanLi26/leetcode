class Solution {
public:
    void solve(vector<vector<char>>& board) {
        if(board.empty() || board[0].empty()) return;
        for(int col = 0; col < board[0].size(); col++) {
            if(board[0][col] =='O') surrDFS(board, 0, col);
            if(board[board.size()-1][col] == 'O') surrDFS(board, board.size()-1, col);
        }
        for(int row = 0; row < board.size(); row++) {
            if(board[row][0] == 'O') surrDFS(board, row, 0);
            if(board[row][board[row].size()-1] == 'O') surrDFS(board, row, board[row].size()-1);
        }
        for(int row = 0; row < board.size(); row++){
            for(int col = 0; col < board[row].size(); col++){
                if(board[row][col] == 'O') board[row][col] = 'X';
                else if(board[row][col] == '1') board[row][col] = 'O';
            }
        }
    }
    void surrDFS(vector<vector<char>>& board, int row, int col){
        if(board[row][col] == 'O') {
            board[row][col] = '1';
            if(row > 0 && board[row-1][col] == 'O') surrDFS(board, row-1, col);
            if(row < board.size()-1 && board[row+1][col] == 'O') surrDFS(board, row+1, col);
            if(col > 1 && board[row][col-1] == 'O') surrDFS(board, row, col-1);
            if(col < board[row].size()-1 && board[row][col+1] == 'O') surrDFS(board, row, col+1);
        }
    }
};