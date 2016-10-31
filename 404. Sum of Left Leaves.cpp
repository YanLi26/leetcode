/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/* http://www.cnblogs.com/grandyang/p/5923559.html*/
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(root == NULL)
            return 0;
        
        //if it is the left leave, return value then root -> right
        if(root -> left && root -> left -> left == NULL && root -> left -> right == NULL){
            return root -> left -> val + sumOfLeftLeaves(root->right);
        }
        
        //if it is not the left leave, find the depth node
        return sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
    }
};
