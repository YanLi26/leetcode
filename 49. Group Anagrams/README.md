# 49. Group Anagrams
## Difficulty for me
Easy

## Complexity
time complexity = O(n)

space complexity = O(1)

runtime: beat 42.84%

## Summary
### map

借用map存放每一个string在结果里的位置，每次对原strs中的string进行排序在map中寻找，如果有插入res中相应位置，没有就push_back。

### Tips

