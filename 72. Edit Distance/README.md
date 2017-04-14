# 72. Edit Distance

ref: http://www.cnblogs.com/grandyang/p/4344107.html

## Difficulty for me

Hard

## Complexity
time complexity = O(m*n)

space complexity = O(m*n)

runtime: beat 34.26%

## Summary
### DP

求最短距离的问题，我自己肯定是想不出来的。。这用了最短距离算法。递推公式为如果word1[row-1] == word2[col-1]，则dp[row][col] = dp[row-1][col-1]，否则dp[i][j] = min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1]))。

### Tips

