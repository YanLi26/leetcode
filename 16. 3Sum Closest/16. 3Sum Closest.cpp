class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int res = nums[0] + nums[1] + nums[2];
        int difference = abs(res - target);
        for(int i = 0; i < nums.size() - 2; i++){
            int num1 = i+1, num2 = nums.size()-1;
            while(num1<num2){
                int sum = nums[i] + nums[num1] + nums[num2];
                int tmpDiff = abs(target - sum);
                if(tmpDiff < difference){ res = sum; difference = tmpDiff; }
                if(sum < target) ++num1;
                else --num2;
            }
        }
        return res;
    }
};