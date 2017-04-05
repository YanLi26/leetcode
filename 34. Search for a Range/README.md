# 34. Search for a Range
## Difficulty for me
Easy

## Complexity
time complexity = O(n)

space complexity = O(1)

runtime: beat 50.78%

## Summary
### Binary Search

二分查找问题，比常规的二分查找多了找寻相同数的步骤。主要思路为，先进行二分查找找到目标数的其中一个position，然后分别向左向右找到这个第一个不等于这个数的位置，判定边界条件，输出left+1, right-1

### Tips

1. 判定边界条件