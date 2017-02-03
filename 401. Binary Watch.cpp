class Solution {
public:
    vector<string> readBinaryWatch(int num) {
        vector<string> res;
        for(int hour = 0; hour < 12; hour++){
            for(int min = 0; min < 60; min++){
                if(bitset<10>((hour<<6) + min).count() == num)
                    res.push_back(to_string(hour) + (min<10 ? ":0" : ":") + to_string(min));
            }
        }
        return res;
    }
};