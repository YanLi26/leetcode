class Solution {
public:
    bool isPowerOfFour(int num) {
        return log10(num)/log10(4) - (int)(log10(num)/log10(4))==0;
    }
};