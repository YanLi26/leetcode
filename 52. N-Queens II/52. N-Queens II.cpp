class Solution {
public:
    int totalNQueens(int n) {
        int res = 0;
        vector<int> position(n,-1);
        queensDFS(position, 0, n, res);
        return res;
    }
    void queensDFS(vector<int>& position, int i, int n, int& res){
        if(i==n){ ++res; return;}
        for(int j = 0; j < n; j++){
            if(isValid(position, i, j)){
                position[i] = j;
                queensDFS(position, i+1, n, res);
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