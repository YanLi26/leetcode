class Solution {
public:
    int arrangeCoins(int n) {
        int i = 0;
        while(n >= i){
            n -= i;
            i++;
        }
        if(n == i) return i;
        else return i - 1;
    }
};
