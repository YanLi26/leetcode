class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int tag = 0;
        for(int i = digits.size() - 1; i >= 0; i--){
            if(i == digits.size() - 1){
                digits[i] += 1;
            }
            digits[i] += tag;
            if(digits[i] >= 10){
                digits[i] %= 10;
                tag = 1;
            }
            else{
                tag = 0;
            }
        }
        if(tag == 1){
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};