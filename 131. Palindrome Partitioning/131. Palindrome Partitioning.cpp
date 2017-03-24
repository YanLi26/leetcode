// ref: http://www.cnblogs.com/grandyang/p/4270008.html

class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> tmp;
        partitionHelper(s, res, tmp, 0);
        return res;
    }
    
    void partitionHelper(string s, vector<vector<string>> &res, vector<string> &tmp, int start){
        if(start == s.size()){
            res.push_back(tmp);
            return;
        }
        for(int i = start; i < s.size(); i++){
            if(isPalindrome(start, i, s)){
                tmp.push_back(s.substr(start, i-start+1));
                partitionHelper(s, res, tmp, i+1);
                tmp.pop_back();
            }
        }
    }
    
    bool isPalindrome(int start, int end, string s){
        while(start < end){
            if(s[start] != s[end]) return false;
            ++start; --end;
        }
        return true;
    }
};