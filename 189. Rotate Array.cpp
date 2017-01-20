class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;
        for(int i = 0; i < k; i++){
            nums.insert(nums.begin(), nums[nums.size() - 1]);
            nums.pop_back();
        }
    }
};