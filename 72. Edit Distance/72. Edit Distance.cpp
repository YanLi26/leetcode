// ref: http://www.cnblogs.com/grandyang/p/4344107.html

class Solution {
public:
    int minDistance(string word1, string word2) {
        int size1 = word1.size(), size2 = word2.size();
        vector<vector<int>>dp(size1+1, vector<int>(size2+1,0));
        for(int col = 0; col <= size2; col++) dp[0][col] = col;
        for(int row = 0; row <= size1; row++) dp[row][0] = row;
        for(int row = 1; row <=size1; row++) {
            for(int col = 1; col <= size2; col++) {
                if(word1[row-1] == word2[col-1]) dp[row][col] = dp[row-1][col-1];
                else {
                    dp[row][col] = min(dp[row-1][col-1], min(dp[row-1][col], dp[row][col-1]))+1;
                }
            }
        }
        return dp[size1][size2];
    }
};