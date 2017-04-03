# 18. 4Sum
## Difficulty for me
Medium

## Complexity

time complexity = O($n^3$)

space complexity = O(1)

runtime: beat 86.57%

## Summary
### sum

比3sum多了一层循环，数组排序，固定第一个数和第二个数，通过比对大小确定第三第四个数。难点在于去重，如果每次判定是否重复会超时，借用set不重复的特性，将res设定为set，最后转成vector返回。

### Tips

1. 用set实现不重复