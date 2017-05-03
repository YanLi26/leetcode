# 120. Triangle
## Difficulty for me

Medium

## Complexity
time complexity = O(m*n)

space complexity = O(n)

runtime: beat 29.10%

## Summary
### Dynamic Programming

dp的题最重要是写出公式，如果从上到下依次筛选，则公式为triangle[i][j] += min(triangle[i - 1][j - 1], triangle[i - 1][j])，这样会改变数组的值，而且还需要判定边界值，因此用从下向上的方式，dp[j] = min(dp[j], dp[j + 1]) + triangle[i][j]，将小的数放在j下方。

### Tips

