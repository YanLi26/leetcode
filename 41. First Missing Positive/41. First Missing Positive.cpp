class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        if(nums.empty()) return 1;
        sort(nums.begin(), nums.end());
        int positiveNum;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0){
                positiveNum = i;
                break;
            }
        }
        if(positiveNum-1 == nums.size()-1) return 1;
        if(nums[positiveNum] > 1) return 1;
        for(int j = positiveNum; j < nums.size()-1; j++){
            if(nums[j+1] - nums[j] != 1 && nums[j+1] - nums[j] != 0) return nums[j]+1;
        }
        return nums[nums.size()-1] +1;
    }
};