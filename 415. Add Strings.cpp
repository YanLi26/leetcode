class Solution {
public:
    string addStrings(string num1, string num2) {
        int a, b, carry = 0, sum;
        string result;
        for(int i = num1.size() - 1, j = num2.size() - 1; i >= 0 || j >= 0; i--, j--){
            if(i >= 0) a = num1[i] - '0';
            else a = 0;
            if(j >= 0) b = num2[j] - '0';
            else b = 0;
            sum = a + b + carry;
            carry = sum/10;
            sum %= 10;
            result.push_back(sum + '0');
        }
        if(carry == 1) result.push_back('1');
        reverse(result.begin(), result.end());
        return result;
    }
};
