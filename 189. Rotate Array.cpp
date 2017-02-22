class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int last = nums.size() - 1;
        for(int i = 0; i < k; i++){
            nums.insert(nums.begin(),nums[last]);
            nums.pop_back();
        }
    }
};