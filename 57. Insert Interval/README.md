# 57. Insert Interval
## Difficulty for me

Medium

## Complexity
time complexity = O(nlogn)

space complexity = O(1)

runtime: beat 8.41%

## Summary
### sort

将新的struct插入原vector，按start排序。如果前一个数的结尾比第二个数的开头大，合并。

### Tips

