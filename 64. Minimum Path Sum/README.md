# 64. Minimum Path Sum
## Difficulty for me

Medium

## Complexity
time complexity = O(m*n)

space complexity = O(m*n)

runtime: beat 82.92%

## Summary
### DP

本来想用dfs，结果超时。改用dp。主要思想为，存储一个df矩阵，先初始化第一行和第一列为横向走或竖向走的步数。然后不断更新dp数组，公式为dp[i][j] = grid[i][j]+ min(dp[i-1][j], dp[i][j-1])，最终找到最短步数。

### Tips

