class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        int zeroNum = 0;
        
        if(nums.empty()) return res;
        int pro = 1;
        for(int num: nums){
            if(num != 0) pro*=num;
            else zeroNum++;
        }
        if(zeroNum > 1) res.assign(nums.size(), 0);
        else if(zeroNum == 1){
            for(int num: nums){
                if(num != 0) res.push_back(0);
                else res.push_back(pro);
            }
        }
        else{
            for(int num: nums) res.push_back(pro/num);
        }
        return res;
    }
};