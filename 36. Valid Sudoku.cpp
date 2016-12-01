class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        if(board.empty()) return false;
        int col[9][9] = {0}, row[9][9] = {0}, cell[9][9] = {0};
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[0].size(); j++){
                if(board[i][j] != '.')
                {
                    int num = board[i][j] - '0' - 1, k = i / 3 * 3 + j / 3;
                    if(col[i][num] || row[j][num] || cell[k][num])
                        return false;
                    col[i][num] = row[j][num] = cell[k][num] = 1;
                }
            }
        }
        return true;
    }
};