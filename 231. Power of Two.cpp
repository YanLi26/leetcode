class Solution {
public:
    bool isPowerOfTwo(int n) {
        return (log10(n)/log10(2) - int(log10(n)/log10(2)) == 0);
    }
};