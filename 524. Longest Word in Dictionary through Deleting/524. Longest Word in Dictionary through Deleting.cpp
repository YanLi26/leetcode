class Solution {
public:
    string findLongestWord(string s, vector<string>& d) {
        sort(d.begin(), d.end(), [](string a, string b){
            if(a.size() == b.size()) return a < b;
            return a.size() > b.size();
        });
        for(int i = 0; i < d.size(); i++){
            int sTag = 0, dTag = 0;
            while(sTag != s.size() && dTag != d[i].size()){
                if(s[sTag] == d[i][dTag]) ++dTag;
                ++sTag;
            }
            if(dTag == d[i].size()) return d[i];
        }
        return "";
    }
};