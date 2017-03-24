# 79. Word Search
## Difficulty for me
Medium

## Complexity
time complexity = O()

space complexity = O(m*n)

runtime: beat 5.08%

## Summary
### backtrack, DFS
回溯的题归根结底都一个解法。用另一个函数check是否符合题目要求。比如这道题，existHelper函数就是用来check在不重复查找同一位的情况下，每一位是否和word一样，如果不一样就回退到上一位重新查找。

需要优化

### Tips
1.在backtrack时不能写++i，因为回溯回来i的值会变

2.回溯的time complexity不会算😔