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
    int findBottomLeftValue(TreeNode* root) {
        if(!root) return NULL;
        queue<TreeNode*> levelNode;
        levelNode.push(root);
        int leftMost;
        while(!levelNode.empty()){
            leftMost = levelNode.front()->val;
            int size = levelNode.size();
            for(int i = 0; i < size; i++){
                TreeNode* tmp = levelNode.front();
                levelNode.pop();
                if(tmp->left) levelNode.push(tmp->left);
                if(tmp->right) levelNode.push(tmp->right);
            }
        }
        return leftMost;
    }
};