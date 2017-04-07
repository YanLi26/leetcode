# 41. First Missing Positive
## Difficulty for me
Medium

## Complexity
time complexity = O(n)

space complexity = O(1)

runtime: beat 70.64%

## Summary
### sort， search

算是排序查找的问题，题目不难，麻烦的是限定条件很多。条件列在tip中。

### Tips

1. 空
2. 找到第一个positive number
3. 如果第一个positive number > 1 或者 没有positive number， 则返回1
4. 找到第一个不连续的positive number，并且去除重复项
5. 如果全部连续，则返回最后一个数字加1