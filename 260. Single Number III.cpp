class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> res;
        unordered_map<int,int> numsMap;
        for(int num:nums){
            numsMap[num]++;
        }
        for(auto it = numsMap.begin(); it!=numsMap.end(); it++){
            if(it->second == 1) res.push_back(it->first);
        }
        return res;
    }
};