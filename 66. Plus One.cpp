class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int curr = 1;
        for(int i = digits.size() - 1; i >= 0; i--){
            if(digits[i] == 9 && curr == 1) digits[i] = 0;
            else{
                digits[i] += curr;
                curr = 0;
                break;
            }
        }
        if(curr == 1) digits.insert(digits.begin(), 1);
        return digits;
    }
};