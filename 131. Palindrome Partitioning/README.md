# 131. Palindrome Partitioning
## Difficulty for me
Medium

## Complexity
time complexity = O($n^2$)

space complexity = O(n)

runtime: beat 45.58%

## Summary
### backtrack
思路还是和其他回溯问题一样，用另一个helper的function逐个遍历，不同的是要判断是否为回文。

### Tips
1.tmp记得用pop_back回退

