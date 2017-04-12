class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n, vector<int>(n, 0));
        if(n <= 0) return res;
        int value = 1, size = n;
        for(int row = 0; row < (n+1)/2; row++, size-=2){
            for(int col = row; col < row+size; col++)
                res[row][col] = value++;
            for(int row1 = row+1; row1<row+size; row1++)
                res[row1][row+size-1] = value++;
            if(size == 1) break;
            for(int col = row+size-2; col>=row; col--)
                res[row+size-1][col] = value++;
            for(int row1 = row+size-2; row1>=row+1; row1--)
                res[row1][row] = value++;
        }
        return res;
    }
};