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
    vector<int> largestValues(TreeNode* root) {
        vector<int> res;
        if(!root) return res;
        queue<TreeNode*> levelNode;
        levelNode.push(root);
        while(!levelNode.empty()){
            int size = levelNode.size();
            int maxNum = INT_MIN;
            for(int i = 0; i < size; i++){
                TreeNode* tmp = levelNode.front();
                if(tmp->val > maxNum) maxNum = tmp -> val;
                levelNode.pop();
                if(tmp->left) levelNode.push(tmp->left);
                if(tmp->right) levelNode.push(tmp->right);
            }
            res.push_back(maxNum);
        }
        return res;
    }
};