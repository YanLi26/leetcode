//isalnum()
class Solution {
public:
    bool isPalindrome(string s) {
        if(s == "") return true;
        int last = s.size() - 1, pre = 0;
        while(pre <= last){
            if(!isalnum(s[pre])) pre++;
            if(!isalnum(s[last])) last--;
            if(isalnum(s[pre]) && isalnum(s[last])){
                if(tolower(s[pre]) != tolower(s[last]) ) return false;
                else{
                    pre++;
                    last--;
                }
            } 
        }
        return true;
    }
};