// http://www.cnblogs.com/lichen782/p/leetcode_Jump_Game_II.html

class Solution {
public:
    int jump(vector<int>& nums) {
        int res = 0, curr = 0, last = 0;
        for(int i = 0; i < nums.size(); i++){
            if(i > last){
                last = curr;
                ++res;
            }
            curr = max(curr, i + nums[i]);
        }
        return res;
    }
};