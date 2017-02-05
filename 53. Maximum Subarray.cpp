class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int tmp = 0, res = INT_MIN;
        for(int num:nums){
            tmp = max(tmp + num, num);
            res = max(res, tmp);
        }
        return res;
    }
};