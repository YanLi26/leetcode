# 62. Unique Paths
## Difficulty for me

Easy

## Complexity
time complexity = O(m*n)

space complexity = O(m*n)

runtime: beat 54.05%

## Summary
### DP

本来想暴力解，后面发现还得用dp，公式为dp[i][j] = dp[i-1][j]+dp[i][j-1]。

### Tips

