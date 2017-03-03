//Accepted Solution
//http://www.cnblogs.com/grandyang/p/6414461.html
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return {};
        int m = matrix.size(), n = matrix[0].size(), r = 0, c = 0, k = 0;
        vector<int> res(m * n);
        vector<vector<int>> dirs{{-1,1}, {1,-1}};
        for (int i = 0; i < m * n; ++i) {
            res[i] = matrix[r][c];
            r += dirs[k][0];
            c += dirs[k][1];
            if (r >= m) {r = m - 1; c += 2; k = 1 - k;}
            if (c >= n) {c = n - 1; r += 2; k = 1 - k;}
            if (r < 0) {r = 0; k = 1 - k;}
            if (c < 0) {c = 0; k = 1 - k;}
        }
        return res;
    }
};

//time limit exceeded
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        vector<int>res;
        int row = 0, column = 0, sum = 0;
        int rowSize = matrix.size(), colSize = matrix[0].size();
        if(matrix.size() == 0 && matrix[0].size() == 0) return res;
        res.push_back(matrix[0][0]);
        for(int i = 0; i < rowSize*colSize-1; i++){
            if(sum%2 == 0){
                if(column == colSize-1){row++; sum++;}
                else if(column == sum){column++; sum++;}
                else{row--; column++;}
            }
            else{
                if(row == rowSize-1){column++; sum++;}
                else if(row == sum){row++; sum++;}
                else{row++; column--;}
            }
            res.push_back(matrix[row][column]);
        }
        return res;
    }
};

//time limit exceeeded
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        for(int sum = 0; sum <= 2*(matrix.size()-1); sum++){
            if(sum % 2 == 1){
                for(int i = 0; i <= sum; i++){
                    if(i < matrix.size() && (sum-i)<matrix[0].size()) res.push_back(matrix[i][sum-i]);
                }
            }
            else{
                for(int i = sum; i >=0; i--){
                    if(i < matrix.size() && (sum-i)<matrix[0].size()) res.push_back(matrix[i][sum-i]);
                }
            }
        }
        return res;
    }
};