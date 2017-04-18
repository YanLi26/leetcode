class Solution {
public:
    string reverseWords(string s) {
        for(int i = 0, j = 0; i <= s.size(); i++) {
            if(s[i] == ' ' || i == s.size()) {
                reverse(&s[j], &s[i]);
                j = i+1;
            }
        }
        return s;
    }
};