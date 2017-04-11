class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int>visited(nums.size(),0);
        vector<int> tmp;
        permuteDFS(nums, visited, res, tmp, 0);
        return res;
    }
    void permuteDFS(vector<int>& nums, vector<int>& visited, vector<vector<int>>& res, vector<int>& tmp, int level){
        if(level == nums.size()) res.push_back(tmp);
        else{
            for(int i = 0; i < nums.size(); i++){
                if(visited[i] != 1){
                    visited[i] = 1;
                    tmp.push_back(nums[i]);
                    permuteDFS(nums, visited, res, tmp, level + 1);
                    tmp.pop_back();
                    visited[i] = 0;
                }
            }
        }
    }
};