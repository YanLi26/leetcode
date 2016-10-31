/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/* http://www.code123.cc/docs/leetcode-notes/binary_tree/maximum_depth_of_binary_tree.html */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;
        
        int left_depth = maxDepth(root->left);
        int right_depth = maxDepth(root->right);
        
        return max(left_depth, right_depth) + 1;
    }
};
