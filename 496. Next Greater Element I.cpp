class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        unordered_map<int,int> numsMap;
        vector<int> res;
        for(int i = 0; i < nums.size(); i++){
            numsMap[nums[i]] = i;
        }
        
        for(int findNumsNum: findNums){
            int flag = 0;
            for(int j = numsMap[findNumsNum]; j < nums.size(); j++){
                if(nums[j] > findNumsNum){
                    res.push_back(nums[j]);
                    flag = 1;
                    break;
                }
            }
            
        if(flag == 0) res.push_back(-1);
        }
        return res;
    }
};