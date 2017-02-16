class Solution {
public:
    bool wordPattern(string pattern, string str) {
        map<char,string> patternMap;
        int j = 0, count = 1;;
        for(int i = 0; i < pattern.size(); i++){
            string tmp;
            for(; j < str.size(); j++){
                if(str[j] == ' '){
                    count++;
                    j++;
                    break;
                }
                tmp.push_back(str[j]);
            }
            if(patternMap.find(pattern[i]) == patternMap.end()){
                for(auto it = patternMap.begin(); it != patternMap.end(); ++it) {
                    if (it->second == tmp) return false;
                }
                patternMap[pattern[i]] = tmp;
            }
            else if(patternMap[pattern[i]] != tmp) return false;
        }
        if(j!=str.size() || count != pattern.size()) return false;
        return true;
    }
};