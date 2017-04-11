class Solution {
public:
    bool canJump(vector<int>& nums) {
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] == 0){
                int j = i;
                for(; j >=0; j--){
                    if(nums[j] > i-j) break;
                }
                if(j < 0) return false;
            }
        }
        return true;
    }
};