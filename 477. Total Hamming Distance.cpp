class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int ans = 0, size = nums.size();
        for(int i = 0; i < 32; i++){
            int cnt = 0;
            for(int j = 0; j < size; j++){
                if(nums[j]&1==1) ++cnt;
                nums[j]>>=1;
            }
            ans += cnt*(size-cnt);
        }
        return ans;
    }
};