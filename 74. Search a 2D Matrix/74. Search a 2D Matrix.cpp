class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty() || matrix[0].empty()) return false;
        for(int i = 0; i < matrix.size(); i++) {
            if(target == matrix[i][0]) return true;
            else if((i < matrix.size()-1 && target > matrix[i][0] && target < matrix[i+1][0])
            || i == matrix.size()-1) {
                int left = 0, right = matrix[i].size()-1;
                while(left <= right) {
                    int mid = (left + right)/2;
                    if(target > matrix[i][mid]) left = mid + 1;
                    else if (target < matrix[i][mid]) right = mid - 1;
                    else return true;
                }
                return false;
            }
        }
        return false;
    }
};