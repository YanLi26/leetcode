# 74. Search a 2D Matrix
## Difficulty for me

Easy

## Complexity
time complexity = O(nlogn)

space complexity = O(1)

runtime: beat 33.58%

## Summary
### binary search

先找到第一列前一个数比target小，后一个数比target大，或者到最后一行的位置，这里也可以用binary search，但是我直接搜索了，然后对这行进行binary search。找到那个数字，找不到就返回false。

### Tips

1. binary serach中left = mid + 1, right = mid - 1