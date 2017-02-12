/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 //http://www.cnblogs.com/grandyang/p/4640572.html
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root) return NULL;
        if(root -> val > max(p -> val, q -> val)) return lowestCommonAncestor(root->left, p, q);
        else if(root -> val < min(p -> val, q -> val)) return lowestCommonAncestor(root->right, p, q);
        return root;
    }
};