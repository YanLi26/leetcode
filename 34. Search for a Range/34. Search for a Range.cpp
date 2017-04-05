class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        int left = 0, right = nums.size() - 1, pos = -1;
        while(left <= right){
            int mid = (left + right)/2;
            if(nums[mid] == target){
                pos = mid;
                break;
            }
            if(nums[mid] > target) right = mid - 1;
            else left = mid + 1;
        }
        if(pos == -1) res.insert(res.end(), {-1,-1});
        else{
            int left = pos, right = pos;
            while(nums[pos] == nums[left] || nums[pos] == nums[right]){
                if(nums[pos] == nums[left]) --left;
                if(nums[pos] == nums[right]) ++right;
            }
            if(left < 0) left = -1;
            if(right > nums.size()-1) right = nums.size();
            res.insert(res.end(), {left+1, right-1});
        }
        return res;
    }
};