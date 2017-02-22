class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        if(board.empty() || board[0].empty()) return 0;
        int res = 0;
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[i].size(); j++){
                if(board[i][j] == '.' || (i>0 && board[i-1][j] == 'X') || (j>0 && board[i][j-1] == 'X')) continue;
                res++;
            }
        }
        return res;
    }
};