// reference: http://www.cnblogs.com/grandyang/p/4444160.html

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        genDfs(res, "", n, n);
        return res;
    }
    void genDfs(vector<string>& res, string tmp, int left, int right){
        if(left > right) return;
        if(left == 0 && right == 0) res.push_back(tmp);
        else{
            if(left>0) genDfs(res, tmp+'(', left-1, right);
            if(right>0) genDfs(res, tmp+')', left, right-1);
        }
    }
};