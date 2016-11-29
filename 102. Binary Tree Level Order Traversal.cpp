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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(root == NULL) return res;
        
        queue<TreeNode*> Q;
        Q.push(root);
        while(!Q.empty()){
            vector<int> oneLevel;
            int size = Q.size();
            for(int i = 0; i< size; i++){
                TreeNode *curr = Q.front();
                Q.pop();
                oneLevel.push_back(curr -> val);
                if(curr -> left != NULL) Q.push(curr -> left);
                if(curr -> right != NULL) Q.push(curr ->right);
            }
            res.push_back(oneLevel);
        }
        return res;
    }
};