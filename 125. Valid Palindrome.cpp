class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size() == 0) return true;
        string res;
        for(int i = 0; i < s.size(); i++){
            if(isalnum(s[i])) res.push_back(s[i]);
        }
        int left = 0, right = res.size()-1;
        while(left <= right){
            if(tolower(res[left]) != tolower(res[right])) return false;
            left++; right--;
        }
        return true;
    }
};