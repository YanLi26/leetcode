# 4. Median of Two Sorted Arrays
## Difficulty for me
Very Hard

## Reference
https://discuss.leetcode.com/topic/16797/very-concise-o-log-min-m-n-iterative-solution-with-detailed-explanation

## Complexity
time complexity = O(log(min(m,n))

space complexity = O(1)

runtime: beat 99.11%

## Summary
### Binary Search
把每个数组看成可以切分的点（2*n+1），这样可以同时处理奇数、偶数情况。如果切分的点在两数之间，为偶数情况，中位数为两数合除以2.如果切分点在一个数字上，则中位数为2个这个数字除以2。

先找出长度短的数组，切分这个数组，另一个数组按照这个数组切分的位置确定应该切分的位置。

找出切分点左右的数字，交叉判断两个切分点左右的数字，确定短的数组切分点应该向左移还是向右移。

如果两切分点左边的数字均小于右边的数字，则输出左边最大的数字和右边最小数字的平均数。

### Tips
1.判定小数组为空的情况

2.虽然共有 2*n+1 个切分点，但是 high=2*n，因为留下的是需要切分的位置

3.需要考虑边界情况，比如切分位置在数组端部，则左边或右边数字不存在，因此设置其为 INT_MIN 或 INT_MAX
