# 153. Find Minimum in Rotated Sorted Array
## Difficulty for me
Easy

## Complexity
time complexity = O(log(n))

space complexity = O(1)

runtime: beat 36.70%

## Summary
### Binary Search
如果没有rotation返回第一个值，如果有rotation，用二分查找，中间的值比左边的大说明没有到右边小排序，中间值赋给左值；如果中间的值比左边的小，说明中间值在右边小排序中，则将中间值赋给右值。跳出循环的条件就是左值为最大值，右值为相邻的最小值。

### Tips
1.注意循环跳出条件