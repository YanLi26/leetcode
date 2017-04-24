# 84. Largest Rectangle in Histogram
## Difficulty for me

Medium

## Complexity
time complexity = O($n^2$)

space complexity = O(1)

runtime: beat 34.05%

## Summary
### pruning

剪枝。用暴力解最后一个case过不了。因此去掉一些不必要的判定条件。如果局部递增，那么局部的面积就为当前高度乘以当前到局部最高点的距离。

### Tips

