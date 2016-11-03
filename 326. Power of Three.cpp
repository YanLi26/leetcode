/*https://discuss.leetcode.com/topic/34990/1-line-c-no-recursion-loop/2*/
class Solution {
public:
    bool isPowerOfThree(int n) {
        return fmod(log10(n)/log10(3), 1)==0;
    }
};
