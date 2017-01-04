class Solution {
public:
    int hammingDistance(int x, int y) {
        int res = 0;
        x = x^y;
        while(x){
            if(x&1) res++;
            x>>=1;
        }
        return res;
    }
};