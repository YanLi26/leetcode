//res == INT_MAX / 10 && str[i] - '0' > 7
class Solution {
public:
    int myAtoi(string str) {
        if(str.empty()) return 0;
        int i = 0, flag = 1, res = 0;
        while(str[i] == ' ') i++;
        if(str[i] == '+') i++;
        else if(str[i] == '-'){
            flag = -1;
            i++;
        }
        while(i < str.size() && str[i] >= '0' && str[i] <= '9'){
            if(res > INT_MAX/10 || (res == INT_MAX / 10 && str[i] - '0' > 7)){
                if(flag == 1) return INT_MAX;
                else return INT_MIN;
            }
            res = 10 * res + (str[i++] - '0');
        }
        return flag*res;
    }
};