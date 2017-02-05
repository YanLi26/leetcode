class Solution {
public:
    bool isHappy(int n) {
        if(n == 0) return false;
        vector<int> checkLoop;
        while(1){
            int tmp = 0;
            while(n){
                tmp += (n%10)*(n%10);
                n /= 10;
            }
            n = tmp;
            if(n == 1) return true;
            else if(find(checkLoop.begin(), checkLoop.end(), n) != checkLoop.end()) return false;
            if(n!=0) checkLoop.push_back(n);
        }
    }
};