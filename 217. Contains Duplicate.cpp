class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size() == 0) return false;
        unordered_map<int, int> map;
        for(int n: nums) ++map[n];
        for(int n: nums){
            if(map[n] != 1) return true;
        }
        return false;
    }
};
