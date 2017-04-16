class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        vector<int> tmp;
        subsetDFS(nums, tmp, 0, res);
        return res;
    }
    void subsetDFS(vector<int>& nums, vector<int>& tmp, int start, vector<vector<int>>& res) {
        res.push_back(tmp);
        for(int i = start; i < nums.size(); i++) {
            tmp.push_back(nums[i]);
            subsetDFS(nums, tmp, i + 1, res);
            tmp.pop_back();
            while(i < nums.size()-1 && nums[i] == nums[i+1]) ++i;
        }
    }
};