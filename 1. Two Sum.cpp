class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int, int> map;
        for(int i = 0; i < nums.size(); i++){
            auto tmp = map.find(target - nums[i]);
            if(tmp != map.end()){
                res.push_back(map[target-nums[i]]);
                res.push_back(i);
                break;
            }
            map[nums[i]] = i;
        }
        return res;
    }
};