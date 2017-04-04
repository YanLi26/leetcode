class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> res;
        if(s.empty() || words.empty()) return res;
        map<string, int> strMap;
        map<string, int> strMapCy;
        int size = words[0].size();
        int sizeWhole = words.size() * size;
        if(sizeWhole>s.size()) return res;
        for(string str: words) ++strMap[str];
        for(int i = 0; i <= s.size()-sizeWhole; ++i){
            strMapCy = strMap;
            int j = i, tag = 1;
            for(; j < i+sizeWhole; j+=size){
                string tmp = s.substr(j, size);
                --strMapCy[tmp];
                if(strMapCy[tmp] < 0){
                    tag = -1;
                    break;
                }
            }
            if(tag == 1){
                res.push_back(i);
            }
        }
        return res;
    }
};