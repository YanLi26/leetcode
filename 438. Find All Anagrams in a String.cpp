class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        if(s.empty() || p.empty() || s.size() < p.size()) return res;
        vector<int>pTag(256, 0), sTag(256, 0);
        for(char a: p){
            ++pTag[a];
        }
        for(int i = 0; i < p.size(); i++){
            ++sTag[s[i]];
        }
        if(pTag == sTag) res.push_back(0);
        for(int i = 1; i <= s.size() - p.size(); i++){
            --sTag[s[i-1]];
            ++sTag[s[i+p.size()-1]];
            if(sTag == pTag) res.push_back(i);
        }
        return res;
    }
};