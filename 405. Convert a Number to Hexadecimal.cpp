class Solution {
public:
    string toHex(int num) {
        if(num == 0) return "0";
        string res = "";
        unsigned int num_unsign = num;
        while(num_unsign){
            int tmp = num_unsign % 16;
            if(tmp >= 10) res.push_back(tmp - 10 +'a');
            else res.push_back(tmp + '0');
            num_unsign/=16;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};