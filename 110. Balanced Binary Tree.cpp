/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 /*refer:http://www.jiuzhang.com/solutions/balanced-binary-tree/*/
 
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return depth(root) != -1;
    }
    int depth(TreeNode *root) {
        if (root == NULL) {
            return 0;
        }
        //traverse
        int left = depth(root->left);
        int right = depth(root->right);
        //if it is == -1, return -1 all the time
        if (left == -1 || right == -1 || abs(left - right) > 1) {
            return -1;
        }
    return max(left, right) + 1;
    }
};