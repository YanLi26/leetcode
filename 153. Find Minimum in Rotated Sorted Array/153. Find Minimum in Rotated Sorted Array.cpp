class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        
        //no rotation
        if(nums[left] < nums[right]) return nums[left];
        
        //binary search
        //find the situation that left<right or left is the biggest number and right is the least one
        while(left < right && left != (right-1)){
            int mid = (left + right)/2;
            if(nums[left] < nums[mid]) left = mid;
            else right = mid;
        }
        
        return nums[right];
    }
};