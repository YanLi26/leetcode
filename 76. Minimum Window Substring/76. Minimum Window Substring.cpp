class Solution {
public:
    string minWindow(string s, string t) {
        if(t.size() > s.size()) return "";
        map<char, int> tMap;
        string res;
        int count = 0, start = 0, end = 0, minStr = s.size()+1, tag = 0;
        for(char a: t) ++tMap[a];
        vector<int> pos;
        for(int i = 0; i < s.size(); i++) {
            if(tMap.find(s[i]) != tMap.end()) pos.push_back(i);
        }
        int i = 0;
        for(int j = 0; j < pos.size(); j++) {
            --tMap[s[pos[j]]];
            if(tMap[s[pos[j]]] >= 0) ++count;
            while(count == t.size()) {
                if(pos[j] - pos[i] + 1 < minStr) {
                    minStr = pos[j] - pos[i] + 1;
                    res = s.substr(pos[i], minStr);
                }
                ++tMap[s[pos[i]]];
                if(tMap[s[pos[i]]] > 0) --count;
                ++i;
            }
        }
        return res;
    }
};