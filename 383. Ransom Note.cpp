//hash map
//if the numbers of a letter is bigger than magazine in ransomNote, return false

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> map;
        for(char c: magazine) ++map[c];
        for(char c: ransomNote){
            if(--map[c] < 0)
                return false;
        }
        return true;
    }
};
