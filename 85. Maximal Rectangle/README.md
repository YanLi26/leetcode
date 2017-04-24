# 85. Maximal Rectangle
## Difficulty for me

Medium

## Complexity
time complexity = O($m*n^2$)

space complexity = O(m)

runtime: beat 8.53%

## Summary
### pruning, search

84题延续，先用数组记录每一列每个数字到最后一行的最大值，然后用84题的方法剪枝计算最大面积。

### Tips

