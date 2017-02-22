class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        unordered_map<int, int> numMap;
        for(int num: nums){
            numMap[num]++;
        }
        for(auto it = numMap.begin(); it != numMap.end(); it++){
            if(it->second == 2) res.push_back(it->first);
        }
        return res;
    }
};