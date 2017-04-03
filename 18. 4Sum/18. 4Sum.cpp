class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> res;
        sort(nums.begin(), nums.end());
        int size = nums.size();
        // the first digit
        for(int i = 0; i < size-3; i++){
            // the second digit
            for(int j = i+1; j < size-2; j++){
                int left = j+1, right = size-1, tmp = target-nums[i]-nums[j]; 
                while(left < right){
                    if(nums[left]+nums[right]==tmp){
                        res.insert({nums[i], nums[j], nums[left], nums[right]});
                        ++left; --right;
                    }
                    else if(nums[left]+nums[right]>tmp) --right;
                    else ++left;
                }
            }
        }
        return vector<vector<int>>(res.begin(), res.end());
    }
};