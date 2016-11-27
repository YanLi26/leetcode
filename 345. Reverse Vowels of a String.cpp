class Solution {
public:
    string reverseVowels(string s) {
        vector<char> tmp;
        for(char a: s){
            if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a=='u'
            || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a=='U'){
                tmp.push_back(a);
            }
        }
        for(int i = s.size() - 1, j = 0; i >= 0; i--){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] =='u'
            || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] =='U'){
                s[i] = tmp[j];
                j++;
            }
        }
        return s;
    }
};