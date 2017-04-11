class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
         queue<vector<int>> zero;
         for(int i = 0; i < matrix.size(); i++){
             for(int j = 0; j < matrix[i].size(); j++){
                 if(matrix[i][j] == 0) zero.push({i,j});
                 else matrix[i][j] = INT_MAX;
             }
         }
         while(!zero.empty()){
             vector<int> tmp = zero.front();
             zero.pop();
             int i = tmp[0], j = tmp[1];
             if(i > 0 && matrix[i-1][j] > matrix[i][j]){
                 matrix[i-1][j] = matrix[i][j] + 1; zero.push({i-1,j});
             }
             if(i < matrix.size()-1 && matrix[i+1][j] > matrix[i][j]){
                 matrix[i+1][j] = matrix[i][j] + 1; zero.push({i+1,j});
             }
             if(j > 0 && matrix[i][j-1] > matrix[i][j]){
                 matrix[i][j-1] = matrix[i][j] + 1; zero.push({i,j-1});
             }
             if(j < matrix[0].size()-1 && matrix[i][j+1] > matrix[i][j]){
                 matrix[i][j+1] = matrix[i][j] + 1; zero.push({i,j+1});
             }
         }
         return matrix;
    }
};

