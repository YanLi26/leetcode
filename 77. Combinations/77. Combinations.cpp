class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> tmp;
        combineDFS(res, k, n, 1, tmp);
        return res;
    }
    void combineDFS(vector<vector<int>>& res, int level, int n, int start, vector<int>& tmp){
        if(level == 0){
            res.push_back(tmp);
            return;
        }
        for(int i = start; i <= n; i++){
            tmp.push_back(i);
            combineDFS(res, level-1, n, ++start, tmp);
            tmp.pop_back();
        }
    }
};