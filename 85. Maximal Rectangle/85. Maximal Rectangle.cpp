class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.empty() || matrix[0].empty()) return 0;
        int res = 0;
        vector<int> layer(matrix[0].size(), 0);
        for(int i = 0; i < matrix.size(); i++) {
            for(int j = 0; j < matrix[i].size(); j++) {
                int count = 0;
                if(matrix[i][j] == '1') {
                    for(int k = i; k < matrix.size(); k++) {
                       if(matrix[k][j] == '1') ++count;
                       else break;
                   }
               }
               layer[j] = count;
            }
            for(int j = 0; j < layer.size(); j++) {
                if(j < layer.size() - 1 && layer[j] <= layer[j+1]) continue;
                int minR = layer[j];
                for(int k = j; k >= 0; k--) {
                    minR = min(minR, layer[k]);
                    res = max(res, minR*(j-k+1));
                }
                
            }
        }
        return res;
    }
};