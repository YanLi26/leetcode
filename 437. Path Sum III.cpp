/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 /*http://www.cnblogs.com/grandyang/p/6007336.html*/
class Solution {
public:
    int pathSum(TreeNode* root, int sum) {
        if(root == NULL) return 0;
        return sumUp(root, 0, sum) + pathSum(root ->left, sum) + pathSum(root -> right, sum);
    }
    int sumUp(TreeNode* node, int pre, int &sum){
        if(node == NULL) return 0;
        int cur = pre + node -> val;
        return (cur == sum) + sumUp(node -> left, cur, sum) + sumUp(node -> right, cur, sum);
    }
};