class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.size() <= 0) return 0;
        int loc = s.size() - 1, res = 0;
        while(loc >= 0){
            if(s[loc] != ' ') break;
            loc--;
        }
        for(; loc >= 0; loc--){
            if(s[loc] != ' ') res++;
            else break;
        }
        return res;
    }
};