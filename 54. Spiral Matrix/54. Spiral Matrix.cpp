class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        if(matrix.empty() || matrix[0].empty()) return res;
        int size = matrix.size(), size1 = matrix[0].size();
        int large = size;
        if(size > size1) large = size1;
        int half = (large+1)/2;
        for(int i = 0; i < half; i++, size -= 2, size1 -=2){
            for(int j = i; j < i + size1; j++){
                res.push_back(matrix[i][j]);
            }
            for(int j = i+1; j < i+size; j++){
                res.push_back(matrix[j][i+size1-1]);
            }
            if(size == 1 || size1 == 1) break;
            for(int j = i+size1-2; j >= i; j--){
                res.push_back(matrix[i+size-1][j]);
            }
            for(int j = i+size-2; j>i; j--){
                res.push_back(matrix[j][i]);
            }
        }
        return res;
    }
};