class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<int> position(n, -1);
        queenDFS(res, 0, n, position);
        return res;
    }
    
    void queenDFS(vector<vector<string>>& res, int i, int n, vector<int>& position){
        if(i == n){
            vector<string> tmp(n, string(n, '.'));
            for(int k = 0; k < n; k++) tmp[k][position[k]] = 'Q';
            res.push_back(tmp);
            return;
        }
        for(int j = 0; j < n; j++){
            if(isValid(position, i, j)){
                position[i] = j;
                queenDFS(res, i+1, n, position);
                position[i] = -1;
            }
        }
    }
    
    bool isValid(vector<int> position, int i, int j){
        for(int k = 0; k < i; k++){
            if(j == position[k] || abs(i-k) == abs(j-position[k])) return false;
        }
        return true;
    }
};