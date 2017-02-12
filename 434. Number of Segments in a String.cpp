class Solution {
public:
    int countSegments(string s) {
        int i = 0, j = s.size() - 1;
        while(i<s.size()){
            if(s[i] != ' ') break;
            else i++;
        }
        if(s.size() == 0 || i == s.size()) return 0;
        while(j>=i){
            if(s[j] != ' ') break;
            else j--;
        }
        int res = 1;
        for(; i <= j; i++){
            if(s[i] == ' ' && s[i-1] != ' ') res++;
        }
        return res;
    }
};