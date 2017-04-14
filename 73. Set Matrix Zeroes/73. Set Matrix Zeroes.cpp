class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> position;
        for(int i = 0; i < matrix.size(); i++) {
            for(int j = 0; j < matrix[i].size(); j++) {
                if(matrix[i][j] == 0) position.push_back({i, j});
            }
        }
        for(int i = 0; i < position.size(); i++) {
            int pos1 = position[i][0], pos2 = position[i][1];
            for(int row = 0; row < matrix.size(); row++) {
                matrix[row][pos2] = 0;
            }
            for(int col = 0; col < matrix[0].size(); col++) {
                matrix[pos1][col] = 0;
            }
        }
    }
};