class Solution {
public:
    int findNthDigit(int n) {
        long long begin = 1, nums = 9, digit = 1;
        while(n > begin * nums * digit){
            n -= begin * nums * digit;
            begin *= 10;
            digit++;
        }
        begin += (n-1)/digit;
        string s = to_string(begin);
        return s[(n - 1) % digit] - '0';
    }
};