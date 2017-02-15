/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 //http://www.cnblogs.com/grandyang/p/4738031.html
class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>res;
        if(root) dfs(root,res,"");
        return res;
    }
    void dfs(TreeNode* root, vector<string> &res, string out){
        out += to_string(root->val);
        if(!root->left && !root->right) res.push_back(out);
        else{
            //use if, if cause we should find all paths
            if(root->left) dfs(root->left, res, out+"->");
            if(root->right) dfs(root->right, res, out+"->");
        }
    }
};