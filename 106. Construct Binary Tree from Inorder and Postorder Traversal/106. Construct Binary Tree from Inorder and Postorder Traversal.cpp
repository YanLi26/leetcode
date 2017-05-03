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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return newTree(inorder, postorder, 0, inorder.size()-1, 0, postorder.size()-1);
    }
    TreeNode* newTree(vector<int>& inorder, vector<int>& postorder, int il, int ir, int pl, int pr) {
        if(il > ir || pl > pr) return NULL;
        int i;
        for(i = il; i <= ir; i++) {
            if(inorder[i] == postorder[pr]) break;
        }
        TreeNode* curr = new TreeNode(postorder[pr]);
        curr -> left = newTree(inorder, postorder, il, i-1, pl, pl+i-il-1);
        curr -> right = newTree(inorder, postorder, i+1, ir, pl+i-il, pr-1);
        return curr;
    }
};