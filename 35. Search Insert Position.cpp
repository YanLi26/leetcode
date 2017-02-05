//binary search
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums.empty()) return 0;
        
        int low = 0, high = nums.size() - 1;
        
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] > target){
                if(mid == 0 || nums[mid - 1] < target) return mid;
                else high = mid -1;
            }
            else{
                if(mid == nums.size() - 1 || nums[mid + 1] > target) return mid + 1;
                else low = mid + 1;
            }
        }
    }
};