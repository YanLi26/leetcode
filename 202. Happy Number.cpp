//if it has a loop, it is false
class Solution {
public:
    bool isHappy(int n) {
        if(n == 1) return true;
        unordered_set<int> isLoop;
        isLoop.insert(n);
        while(1){
            int sum = 0;
            while(n){
                sum += (n % 10) * (n % 10);
                n/=10;
            }
            if(sum == 1) return true;
            else if(isLoop.find(sum) != isLoop.end()) return false;
            else isLoop.insert(sum);
            n = sum;
        }
    }
};
