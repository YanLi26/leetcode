class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        map<string,int> strMap;
        for(int i = 0, j = 0; i < strs.size(); i++) {
            string tmp = strs[i];
            sort(tmp.begin(), tmp.end());
            if(strMap.find(tmp) != strMap.end()) {
                res[strMap[tmp]].push_back(strs[i]);
            }
            else {
                strMap[tmp] = j;
                ++j;
                res.push_back({strs[i]});
            }
        }
        return res;
    }
};