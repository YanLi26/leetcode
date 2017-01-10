class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        nums.push_back(nums[nums.size() - 1]);
        int tag = 0;
        for(int i = nums.size() - 2; i >= 0; i--){
            if(nums[i]<nums[i+1]) tag++;
            if(tag == 2) return nums[i];
        }
        return nums[nums.size() - 1];
    }
};