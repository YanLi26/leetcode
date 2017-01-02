class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        if(s.size()==0) return length;
        int i = s.size()-1;
        while(s[i] == ' '){
            i--;
        }
        for(; i >= 0; i--){
            if(s[i] == ' '){
                break;
            }
            else length++;
        }
        return length;
    }
};