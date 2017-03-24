# 78. Subsets
## Difficulty for me
Medium

## Complexity
time complexity = O($n^2$)

space complexity = O(1)

runtime: beat 25.27%

## Summary
### backtrack or not
非递归解法：每次在前面集合基础上加更大的一位数。比如第一次为[]；第二次加1，为[[], [1]]；第三次加2，为[[],[1],[2],[1,2]]。

递归解法：本质上与非递归解法一样，构造二叉树，每次层结点左子树加一个数，右子树保持不变，最后输出所有叶子结点。

### Tips
1.本来想按照位数循环，2位等于一位的加上每个比它大的数，结果timeout(T T)。按大小进行循环可以少循环一层。