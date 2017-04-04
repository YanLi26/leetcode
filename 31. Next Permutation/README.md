# 31. Next Permutation
## Difficulty for me
Medium

## Complexity
time complexity = O($n^2$)

space complexity = O(1)

runtime: beat 64.76%

## Summary
### permutation

全排列问题，首先要了解全排列的算法。从后向前，找出第一个减小的数字，和从后向前第一个比它大的数字交换，再将后面的序列reverse。

### Tips

1. 了解全排列