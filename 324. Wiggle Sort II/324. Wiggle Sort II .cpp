class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int> tmp = nums;
        sort(tmp.begin(), tmp.end());
        int left = (nums.size()+1)/2 - 1, right = nums.size()-1;
        for(int i = 0; i < nums.size(); i++){
            if(i%2 == 1) nums[i] = tmp[right--];
            else nums[i] = tmp[left--];
        }
    }
};