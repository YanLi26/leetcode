//http://www.cnblogs.com/grandyang/p/5896454.html
class Solution {
public:
    vector<string> readBinaryWatch(int num) {
        vector<string> res;
        string s;
        for(int i = 0; i < 12; i++){
            for(int j = 0; j < 60; j++){
                if(bitset<10>((i << 6) + j).count() == num){
                    if(j < 10) s = ":0";
                    else s = ":";
                    res.push_back(to_string(i) + s + to_string(j));
                }
            }
        }
        return res;
    }
};
