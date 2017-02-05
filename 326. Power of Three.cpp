class Solution {
public:
    bool isPowerOfThree(int n) {
        return log10(n)/log10(3) - int(log10(n)/log10(3))==0;
    }
};