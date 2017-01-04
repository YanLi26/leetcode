class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        string res = "";
        for(int i=0; i<strs[0].size(); i++){
            char c = strs[0][i];
            for(int j=0; j<strs.size(); j++){
                if(c!=strs[j][i] || i >= strs[j].size()) return res;
            }
            res.push_back(c);
        }
        return res;
    }
};