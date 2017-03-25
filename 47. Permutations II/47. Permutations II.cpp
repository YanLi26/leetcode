// Author: Elaine

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        vector<int> tmp;
        vector<int> visited(nums.size(), 0);
        if(nums.empty()) return res;
        DFS(res, tmp, 0, visited, nums);
        return res;
    }
    void DFS(vector<vector<int>> &res, vector<int> &tmp, int layer, vector<int> &visited, vector<int> nums){
        if(layer == nums.size()){
            res.push_back(tmp);
            return;
        }
        for(int i = 0; i < nums.size(); ++i){
            if(visited[i]) continue;
            // check if num[i-1] equals num[i] and num[i-1] was visited
            if(i > 0 && nums[i-1] == nums[i] && visited[i-1] == 1) continue;
            visited[i] = 1;
            tmp.push_back(nums[i]);
            DFS(res, tmp, layer+1, visited, nums);
            visited[i] = 0;
            tmp.pop_back();
        }
    }
};


