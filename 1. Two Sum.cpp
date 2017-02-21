class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> numsMap;
        vector<int> res;
        for(int i = 0; i < nums.size(); i++){
            if(numsMap.find(target - nums[i]) != numsMap.end()){
                res.push_back(numsMap[target-nums[i]]);
                res.push_back(i);
            }
            numsMap[nums[i]] = i;
        }
        return res;
    }
};