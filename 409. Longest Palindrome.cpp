class Solution {
public:
    int longestPalindrome(string s) {
        int res = 0, flag = 0;
        unordered_map<char,int> pali;
        for(char a: s) ++pali[a];
        for(unordered_map<char, int>::iterator it = pali.begin(); it != pali.end(); it++){
            res += it -> second/2*2;
            if(it -> second %2 == 1) flag = 1;
        }
        if(flag == 1) return ++res;
        else return res;
    }
};