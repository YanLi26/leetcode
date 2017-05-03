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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return newTree(preorder, inorder, 0, preorder.size()-1, 0, inorder.size()-1);
    }
    TreeNode* newTree(vector<int>& preorder, vector<int>& inorder, int pl, int pr, int il, int ir) {
        if(pl > pr || il > ir) return NULL;
        int i = 0;
        for(i = il; i <= ir; i++) {
            if(preorder[pl] == inorder[i]) break;
        }
        TreeNode* curr = new TreeNode(preorder[pl]);
        curr -> left = newTree(preorder, inorder, pl+1, pl+i-il, il, i-1);
        curr -> right = newTree(preorder, inorder, pl+i-il+1, pr, i+1, ir);
        return curr;
    }
};