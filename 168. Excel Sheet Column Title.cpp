//s.insert(s.begin(),'Z');
class Solution {
public:
    string convertToTitle(int n) {
        string s;
        while(n){
            if(n % 26 == 0){
                s.insert(s.begin(),'Z');
                n -= 26;
            }
            else{
                s.insert(s.begin(), n % 26 - 1 + 'A');
                n -= (n % 26);
            }
            n /= 26;
        }
        return s;
    }
};