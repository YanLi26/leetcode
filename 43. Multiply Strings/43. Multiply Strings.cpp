class Solution {
public:
    string multiply(string num1, string num2) {
        string res;
        if(num1.empty() || num2.empty()) return res;
        int carry = 0;
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        vector<int> tmp(num1.size()+num2.size(), 0);
        for(int i = 0; i < num1.size(); i++){
            int j = 0;
            for(; j < num2.size(); j++){
                int numTmp = (num1[i] - '0') * (num2[j] - '0') + carry + tmp[i + j];
                tmp[i + j] = numTmp%10;
                carry = numTmp/10;
            }
            j = num2.size() - 1;
            while(carry != 0){
                int numTmp = carry + tmp[i + ++j];
                tmp[i + j] = numTmp%10;
                carry = numTmp/10;
            }
        }
        
        int tag = 0, i = tmp.size()-1;
        for(; i >=0; i--){
            if(tag == 1) res.push_back(tmp[i] + '0');
            else{
                if(tmp[i] != 0){
                    tag = 1;
                    res.push_back(tmp[i] + '0');
                }
            }
        }
        if(tag == 0 && i == -1) res.push_back('0');
        return res;
    }
};