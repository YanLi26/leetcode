/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 //http://www.cnblogs.com/grandyang/p/4042168.html
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        if(!root->left && !root->right) return 1;
        if(!root->left) return minDepth(root->right)+1;
        if(!root->right) return minDepth(root->left)+1;
        else return 1 + min(minDepth(root->left), minDepth(root->right));
    }
};