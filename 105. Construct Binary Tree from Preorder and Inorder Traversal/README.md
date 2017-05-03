# 105. Construct Binary Tree from Preorder and Inorder Traversal
## Difficulty for me

Medium

## Complexity
time complexity = O()

space complexity = O(1)

runtime: beat 37.33%

## Summary
### binary tree

preorder第一位总为根结点，inorder通过根结点可分为左右子树。因此每次取preorder的第一位为根结点，左子树为preorder下一位，右子树为preorder最左边加上所有左子树个数。递归求解。

### Tips

