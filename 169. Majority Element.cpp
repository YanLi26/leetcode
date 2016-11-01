class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> map;
        for(int n: nums) ++map[n];
        for(unordered_map<int, int>::iterator iter = map.begin(); iter != map.end(); iter++){
            if(iter->second > nums.size()/2) return iter->first;
        }
        return -1;
    }
};
