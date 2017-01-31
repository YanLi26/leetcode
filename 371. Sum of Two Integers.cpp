class Solution {
public:
    int getSum(int a, int b) {
        if(b == 0) return a;
        int sum = 0, carry = 0;
        sum = a ^ b;
        carry = a & b;
        carry <<= 1;
        return getSum(sum, carry);
    }
};