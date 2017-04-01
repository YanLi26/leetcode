# 16. 3Sum Closest
## Difficulty for me
Medium

## Complexity
time complexity = O($n^2$)

space complexity = O(1)

runtime: beat 63.56%

## Summary
### sum
先对数组进行排序，循环这个数组当作第一个数，在其后面选取最小的和最大的数不断向中间靠近，找到最小的diff。

### Tips