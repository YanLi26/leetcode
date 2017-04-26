class Solution {
public:
    bool isScramble(string s1, string s2) {
        if(s1.size() != s2.size()) return false;
        if(s1 == s2) return true;
        string str1 = s1, str2 = s2;
        cout<<s1<<' '<<s2<<endl;
        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());
        if(str1 != str2) return false;
        for(int i = 1; i < s1.size(); i++) {
            string s11 = s1.substr(0,i), s12 = s1.substr(i),
            s21 = s2.substr(0,i), s22 = s2.substr(i),
            s23 = s2.substr(s1.size()-i), s24 = s2.substr(0,s1.size()-i);
            if ((isScramble(s11,s21) && isScramble(s12,s22)) || (isScramble(s11,s23) && isScramble(s12,s24))) return true;
        }
        return false;
    }
};