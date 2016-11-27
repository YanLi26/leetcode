/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root == NULL){
            return true;
        }
        return leftRightSym(root ->left, root -> right);
    }
    bool leftRightSym(TreeNode *left, TreeNode *right){
        if(left == NULL)  return right == NULL;
        if(right == NULL) return left == NULL;
        if(left -> val != right -> val) return false;
        if(!leftRightSym(left -> left, right -> right)) return false;
        if(!leftRightSym(left -> right, right -> left)) return false;
        return true;
    }
};