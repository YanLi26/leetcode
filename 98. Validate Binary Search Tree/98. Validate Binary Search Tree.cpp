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
    bool isValidBST(TreeNode* root) {
        if(!root) return true;
        vector<int> res;
        inorderDFS(root, res);
        for(int i = 0; i < res.size() - 1; i++) {
            if(res[i] >= res[i+1]) return false;
        }
        return true;
    }
    void inorderDFS(TreeNode* root, vector<int>& res) {
        if(!root) return;
        inorderDFS(root->left, res);
        res.push_back(root->val);
        inorderDFS(root->right, res);
    }
};