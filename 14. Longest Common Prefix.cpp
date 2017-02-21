class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res;
        if(strs.size() == 0) return res;
        for(int i = 0; i < strs[0].size(); i++){
            char tmp = strs[0][i];
            for(int j = 0; j < strs.size(); j++){
                if(i>=strs[j].size() || tmp != strs[j][i]) return res;
            }
            res.push_back(tmp);
        }
        return res;
    }
};