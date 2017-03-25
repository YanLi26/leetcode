# 47. Permutations II
## Difficulty for me
Medium

## Complexity
time complexity = O($n^2$)

space complexity = O(n)

runtime: beat 57.85%

## Summary
### backtracking
依旧一样解法的backtracking，依旧一样不会算的time complexity。主要有以下几个参数：

1. res 结果，nums 传入的数据
2. tmp 记录每一种排序
3. layer 记录深搜到哪一层，如果到了nums.size()说明为一种排序结果
4. visited 记录每一层搜索过的数，只要搜索过或者有相同数字的数则置为1。记得回溯后要重新置为0并将tmp中最后的值pop，继续进行搜索。

### Tips