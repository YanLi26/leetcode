# 15. 3Sum
## Difficulty for me
Medium

## Complexity
time complexity = O($n^2$)

space complexity = O(1)

runtime: beat 19.64%

## Summary
### sum
本来想用map解，但是相同数字为4个以上的情况没办法处理。这个解法没有用别的数据结构，将three sum转为two sum求解，用left, right pointer的方式去重。

### Tips
1.用left, right pointer去重
