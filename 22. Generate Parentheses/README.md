# 22. Generate Parentheses
## Difficulty for me
Medium

## Complexity
time complexity = O()

space complexity = O(1)

runtime: beat 16.86%

## Summary
### DFS

深搜问题，记录余下的左括号和右括号的数目，先判定如果余下的左括号数大于右括号数，return。如果余下的左右括号数均为0则为一种结果。递归左括号和右括号。

### Tips

reference: http://www.cnblogs.com/grandyang/p/4444160.html