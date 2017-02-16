class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()) return false;
        vector<int> sTag(256, 0);
        for(int i = 0; i < s.size(); i++){
            if(sTag[s[i]] == 0) sTag[s[i]] = t[i];
            else if(sTag[s[i]] != t[i]) return false;
        }
        if(sTag.size() == 0) return true;
        sort(sTag.begin(), sTag.end());
        for(int i = 0; i < sTag.size() - 1; i++){
            if(sTag[i]!=0 && sTag[i] == sTag[i+1]) return false;
        }
        return true;
    }
};