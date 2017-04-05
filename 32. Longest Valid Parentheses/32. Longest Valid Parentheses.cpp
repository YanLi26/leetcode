class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> parStk;
        int tag = 0, res = 0, size = s.size();
        for(int i = 0; i < size; i++){
            if(s[i] == '(') parStk.push(i);
            else{
                if(parStk.empty()) tag = i+1;
                else{
                    parStk.pop();
                    if(parStk.empty()) res = max(res, i-tag+1);
                    else res = max(res, i-parStk.top());
                }
            }
        }
        return res;
    }
};