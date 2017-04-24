class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=1) return nums.size();
        int count = 0, i = 1;
        while(i<nums.size()) {
            if(nums[i-1] == nums[i]) {
                ++count;
                if(count >= 2) nums.erase(nums.begin()+i-1);
                else ++i;
            }
            else { count = 0; ++i; }
        }
        return nums.size();
    }
};