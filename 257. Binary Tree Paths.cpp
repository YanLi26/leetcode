/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 /*http://www.cnblogs.com/grandyang/p/4738031.html*/
 
class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        if (root) treePath(root, res, "");
        return res;
    }
    
    void treePath(TreeNode* root, vector<string> &res, string s){
        s += to_string(root->val);
        if(root -> left == NULL && root -> right == NULL) res.push_back(s);
        else{
            if(root -> left) treePath(root -> left, res, s + "->");
            if(root -> right) treePath(root -> right, res, s + "->");
        }
    }
};