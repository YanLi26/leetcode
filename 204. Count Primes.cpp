//Sieve of Eratosthenes
//http://www.cnblogs.com/grandyang/p/4462810.html
class Solution {
public:
    int countPrimes(int n) {
        vector<bool> num(n-1,true);
        int res = 0;
        num[0] = false;
        for(int i = 2; i < sqrt(n); i++){
            if(num[i-1]){
                for (int j = i * i; j < n; j += i) {
                    num[j - 1] = false;
                }
            }
        }
        for (int j = 0; j < n - 1; ++j) {
            if (num[j]) ++res;
        }
        return res;
    }
};