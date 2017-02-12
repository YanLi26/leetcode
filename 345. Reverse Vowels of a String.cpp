class Solution {
public:
    string reverseVowels(string s) {
        int left = 0, right = s.size()-1;
        while(left <= right){
            if(isVowels(s[left]) && isVowels(s[right])){
                char tmp = s[left];
                s[left] = s[right];
                s[right] = tmp;
                left++;
                right--;
            }
            else if(!isVowels(s[left])) left++;
            else if(!isVowels(s[right])) right--;
        }
        return s;
    }
    
    bool isVowels(char ch){
        if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U') return true;
        return false;
    }
};