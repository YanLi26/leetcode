# 46. Permutations
## Difficulty for me

Medium

## Complexity
time complexity = O($n^2$)

space complexity = O(n)

runtime: beat 12.72%

## Summary
### DFS

常规DFS的题目，先判断输出条件，在循环每个数，判断这个数字是否被循环过，如果没有加入tmp，再循环下一层，循环完pop这个数字，再将这个数字重新置为没有循环过。

### Tips

