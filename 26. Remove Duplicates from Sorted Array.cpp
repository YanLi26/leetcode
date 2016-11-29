class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int res = 1;
        int tmp = nums[0];
        int tag = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != tmp){
                res++;
                tmp = nums[i];
                tag++;
                nums[tag] = nums[i];
            }
        }
        return res;
    }
};