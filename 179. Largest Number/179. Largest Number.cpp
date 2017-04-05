class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string res;
        sort(nums.begin(), nums.end(), [](int num1, int num2){
            return to_string(num1) + to_string(num2) > to_string(num2) + to_string(num1);
        });
        for(int i = 0; i < nums.size(); i++){
            res+=to_string(nums[i]);
        }
        if(res[0]=='0') return "0";
        return res;
    }
};