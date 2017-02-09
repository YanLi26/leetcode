//https://discuss.leetcode.com/topic/77517/c-0-1-space-solution-with-detail-explanation-and-comment-can-anyone-make-it-faster
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
    vector<int> findMode(TreeNode* root) {
        unordered_map<int, int> tmp;
        int maxNum = 0;
        vector<int> res;
        dfs(root, tmp, maxNum);
        for (auto a: tmp)
        if (a.second == maxNum) res.push_back(a.first);
        return res;
    }

    void dfs(TreeNode* root, unordered_map<int, int> &tmp, int &maxNum) {
        if(!root) return;
        tmp[root->val]++;
        maxNum = max(maxNum,tmp[root->val]);
        dfs(root->left,tmp,maxNum);
        dfs(root->right,tmp,maxNum);
    }

};