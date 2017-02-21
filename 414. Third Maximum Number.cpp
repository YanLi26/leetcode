class Solution {
public:
    int thirdMax(vector<int>& nums) {
        if(nums.size() == 0) return NULL;
        int count = 1, res;
        sort(nums.begin(),nums.end(), greater<int>());
        res = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(res != nums[i]){
                res = nums[i];
                count++;
            }
            if(count == 3) break;
            cout<<count;
        }
        
        if(count != 3) return nums[0];
        return res;
    }
};