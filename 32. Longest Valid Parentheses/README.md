# 32. Longest Valid Parentheses
## Difficulty for me
Medium

## Complexity
time complexity = O(n)

space complexity = O(n)

runtime: beat 48.91%

## Summary
### stack

用栈存储'('的位置，如果遇到')'且栈不为空就pop一个'('，否则比较两个序列那个长存储在res里。

### Tips

1. 栈记录位置信息