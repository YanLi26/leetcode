//it can use set or XOR http://www.cnblogs.com/grandyang/p/5931874.html

class Solution {
public:
    int longestPalindrome(string s) {
        int res = 0, tmp = 0;
        unordered_map<char, int> map;
        for(char c: s) ++map[c];
        for(unordered_map<char, int>::iterator it = map.begin(); it != map.end(); it++){
            res += it->second/2*2;
            if(it->second % 2 == 1) tmp = 1;
        }
        if(tmp == 1) return ++res;
        else return res;
    }
};
