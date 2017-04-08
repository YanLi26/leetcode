// O(n) bucket sort
class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size() < 2) return 0;
        int maxNum = -1, minNum = INT_MAX, res = 0;
        for(int num: nums){
            maxNum = max(maxNum, num);
            minNum = min(minNum, num);
        }
        int bucketSize = (maxNum - minNum)/nums.size() + 1;
        int bucketNum = (maxNum - minNum)/bucketSize + 1;
        
        vector<int> bucketNumMax(bucketNum, -1), bucketNumMin(bucketNum, INT_MAX);
        
        for(int num: nums){
            int orderNum = (num - minNum)/bucketSize;
            bucketNumMax[orderNum] = max(bucketNumMax[orderNum], num);
            bucketNumMin[orderNum] = min(bucketNumMin[orderNum], num);
        }
        int mxTag = 0;
        for(int i = 1; i < bucketNum; i++){
            if(bucketNumMax[i] == -1) continue;
            res = max(res, bucketNumMin[i] - bucketNumMax[mxTag]);
            mxTag = i;
        }
        return res;
    }
};

// O(nlogn) time complexity
class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size() < 2) return 0;
        int res = 0;
        sort(nums.begin(), nums.end());
        for(int i = 1; i < nums.size(); i++){
            res = max(res, nums[i] - nums[i-1]);
        }
        return res;
    }
};