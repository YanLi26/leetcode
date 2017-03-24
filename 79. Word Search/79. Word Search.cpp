class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        if(word.empty()) return true;
        //find the first element(it may be more than one)
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[i].size(); j++){
                if(board[i][j] == word[0]){
                    vector<vector<bool>> check(board.size(), vector<bool>(board[0].size(), false));
                    //backtrack
                    if(existHelper(i, j, board, word, 0, check)) return true;
                }
            }
        }
        return false;
    }
    
    bool existHelper(int i, int j, vector<vector<char>> board, string word, int position, vector<vector<bool>>& check){
        if(position == word.size()) return true;
        int iMax = board.size(), jMax = board[0].size();
        bool ans;
        if(i<0 || j<0 || i>=iMax || j>=jMax || check[i][j] || board[i][j]!=word[position]) return false;
        check[i][j] = true;
        ans = existHelper(i+1, j, board, word, position+1, check) || existHelper(i-1, j, board, word, position+1, check)
        || existHelper(i, j+1, board, word, position+1, check) || existHelper(i, j-1, board, word, position+1, check);
        check[i][j] = false;
        return ans;
    }
};