//remember to judge the size of two strings

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<char, int> map;
        for(char c: t) ++map[c];
        for(char c: s){
            if(--map[c] < 0){
                return false;
            }
        }
        return true;
    }
};
