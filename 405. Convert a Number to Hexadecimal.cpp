/*http://www.cnblogs.com/grandyang/p/5926674.html*/
class Solution {
public:
    string toHex(int num) {
        string res = "";
        for(int i = 0; i < 8 && num; i++){
            //choose the last 4 bits
            int t = num & 0xf;
            if(t >= 10) res = char('a' + t - 10) + res;
            else res = char('0' + t) + res;
            num >>= 4;
        }
        if(res.empty()) return "0";
        else return res;
    }
};
