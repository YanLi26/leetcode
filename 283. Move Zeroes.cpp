//put non-zero numbers to the former one by one. Then others are zero

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int tmp = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                nums[tmp] = nums [i];
                tmp++;
            }
        }
        for(; tmp < nums.size(); tmp++){
            nums[tmp] = 0;
        }
    }
};
