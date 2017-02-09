class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        vector<string> res(nums.size());
        map<int,int>m;
        for(int i = 0; i < nums.size(); i++){
            m[nums[i]] = i;
        }
        sort(nums.begin(),nums.end(), greater<int>());
        for(int i = 0; i < nums.size(); i++){
            if(i == 0) res[m[nums[i]]]="Gold Medal";
            else if(i == 1) res[m[nums[i]]]="Silver Medal";
            else if(i == 2) res[m[nums[i]]]="Bronze Medal";
            else res[m[nums[i]]]=to_string(i+1);
        }
        return res;
    }
};