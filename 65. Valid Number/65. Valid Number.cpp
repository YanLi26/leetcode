class Solution {
public:
    bool isNumber(string s) {
        // remove space at the beginning
        while(!s.empty()){
            if(s[0] == ' ') s.erase(s.begin());
            // e/E at the beginning
            else if(s[0] == 'e' || s[0] == 'E') return false;
            else break;
        }
        // remove space at end
        while(!s.empty()){
            if(s[s.size()-1] == ' ') s.erase(s.begin() + s.size()-1);
            // e/E at end
            else if(s[s.size()-1] == 'e' || s[s.size()-1] == 'E') return false;
            else break;
        }
        if(s.empty()) return false;
        int dot = 0, tage = INT_MAX;
        for(int i = 0; i < s.size(); i++){
            // space
            if(s[i] == ' ') return false;
            // '.'
            else if(s[i] == '.') {
                ++dot;
                if(dot > 1) return false;
                int cnt = 0;
                if(i > tage) return false;
                if(i > 0 && isdigit(s[i-1])) ++cnt;
                if(i < s.size()-1 && isdigit(s[i+1])) ++cnt;
                if(cnt == 0) return false;
            }
            else if(s[i] == 'e' || s[i] == 'E') {
                if(tage != INT_MAX) return false;
                tage = i;
                int cnt = 0;
                if(i > 0 && isdigit(s[i-1])) ++cnt;
                else if(i > 1 && s[i-1] == '.' && isdigit(s[i-2])) ++cnt;
                if(i < s.size()-1 && isdigit(s[i+1])) ++cnt;
                else if(i < s.size() - 2 && (s[i+1] == '+' || s[i+1] == '-') && isdigit(s[i+2])) ++cnt;
                if(cnt != 2) return false;
            }
            else if(s[i] == '-' || s[i] =='+') {
                if(i == 0 || i-1 == tage) continue;
                else return false;
            }
            else if(!isdigit(s[i])) return false;
        }
        return true;
    }
};