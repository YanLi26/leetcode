class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1, res = -1;
        while(left <= right){
            int mid = (left + right)/2;
            if(target == nums[mid]){
                res = mid;
                break;
            }
            if(nums[mid] < nums[right]){
                if(nums[mid] < target && nums[right] >= target) left = mid + 1;
                else right = mid - 1;
            }
            else{
                if(nums[mid] > target && nums[left] <= target) right = mid - 1;
                else left = mid + 1;
            }
        }
        return res;
    }
};