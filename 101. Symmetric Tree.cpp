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
        if(!root) return true;
        queue<TreeNode*> levelNode;
        levelNode.push(root);
        while(!levelNode.empty()){
            int size = levelNode.size();
            vector<int> oneLevel;
            for(int i = 0; i < size; i++){
                TreeNode* node = levelNode.front();
                levelNode.pop();
                if(node){
                    oneLevel.push_back(node->val);
                    if(node->left) levelNode.push(node->left);
                    else if(!node->left) levelNode.push(NULL);
                    if(node->right) levelNode.push(node->right);
                    else if(!node->right) levelNode.push(NULL);
                }
                else if(!node) oneLevel.push_back(-1);
            }
            int left = 0, right = oneLevel.size() - 1;
            while(left <= right){
                if(oneLevel[left] == oneLevel[right]){
                    left++;
                    right--;
                }
                else return false;
            }
        }
        return true;
    }
};