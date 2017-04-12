# 54. Spiral Matrix
## Difficulty for me

Medium

## Complexity
time complexity = O($n^2$)

space complexity = O(1)

runtime: beat 84.44%

## Summary
### sort

排序的题，难点在于下标和跳出循环的条件。按照正常的方式旋转输出，先输出第一行，再输出最后一列不包含第一行的数字，然后判断是否只有一行或者一列，如果是跳出，否则会重复输出，如果多于一行或者一列，则继续反向输出最后一行不包含最后一个数字，再输出第一行不包含第一个和最后一个数字，如此循环。

### Tips

