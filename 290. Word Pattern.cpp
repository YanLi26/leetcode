class Solution {
public:
    bool wordPattern(string pattern, string str) {
        unordered_map<char, string> m;
        istringstream in(str);
        int i = 0;
        for (string word; in >> word; ++i) {
            if (m.find(pattern[i]) != m.end()) {
                //there is one pattern that matches more than one words
                if (m[pattern[i]] != word) return false;
            } else {
                //there are more than one patterns that match one word
                for (unordered_map<char, string>::iterator it = m.begin(); it != m.end(); ++it) {
                    if (it->second == word) return false;
                }
                m[pattern[i]] = word;
            }
        }
        return i == pattern.size();
    }
};