class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int res = 0;
        sort(nums.begin(), nums.end());
        int left = 0, right = nums.size() - 1;
        while(left < right){
            res += nums[right--] - nums[left++];
        }
        return res;
    }
};