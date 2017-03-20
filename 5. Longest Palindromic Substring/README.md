# 5. Longest Palindromic Substring
## Difficulty for me
Medium

## Complexity
time complexity = O($n^2$)

space complexity = O(1)

runtime: beat 42.6%

## Summary
### Palindrom
判定最长的回文substring。有两种情况的回文：奇数个，偶数个。首先分别判定奇数个char的回文和偶数个char的回文哪个更长，将长度和position存入stack。最后输出。

### Tips
1.注意判定所有情况，尤其break语句