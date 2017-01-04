class Solution {
public:
    int minMoves(vector<int>& nums) {
        int res = 0, min = 0;
        sort(nums.begin(), nums.end());
        for(int i = 1; i < nums.size(); i++){
            res+=(nums[i] - nums[0]);
        }
        return res;
    }
};