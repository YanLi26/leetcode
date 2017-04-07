class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> tmp;
        sort(candidates.begin(), candidates.end());
        sumDFS(candidates, 0, target, res, tmp);
        return res;
    }
    void sumDFS(vector<int> candidates, int i, int target, vector<vector<int>> &res, vector<int> tmp){
        if(target == 0) res.push_back(tmp);
        else if(target < 0) return;
        else{
            for(int j = i; j < candidates.size(); j++){
                if(j!=i && candidates[j] == candidates[j-1]) continue;
                tmp.push_back(candidates[j]);
                sumDFS(candidates, j+1, target-candidates[j], res, tmp);
                tmp.pop_back();
            }
        }
    }
};