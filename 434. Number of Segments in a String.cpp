class Solution {
public:
    int countSegments(string s) {
        int res = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != ' ' && (s[i+1] == ' ' || i+1 == s.size())) res++;
        }
        return res;
    }
};