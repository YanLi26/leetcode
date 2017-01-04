class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;
        int count = 1;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size();){
            if(nums[i] == nums[i+1]) i++;
            else{
                if(count == nums[i]){
                    count++;
                    i++;
                }
                else if(count < nums[i]){
                    res.push_back(count);
                    count++;
                }
            }
        }
        while(count <= nums.size()){
            res.push_back(count);
            count++;
        }
        return res;
    }
};