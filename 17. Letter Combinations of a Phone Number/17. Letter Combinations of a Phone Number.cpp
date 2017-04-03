class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> digStr = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> res;
        if(digits.empty()) return res;
        letterDfs(res, "", digStr, digits, 0);
        return res;
    }
    void letterDfs(vector<string>& res, string tmp, vector<string> digStr, string digits, int position){
        if(position == digits.size()) res.push_back(tmp);
        else{
            string posTmp = digStr[digits[position] - '2'];
            for(int i = 0; i < posTmp.size(); i++){
                tmp.push_back(posTmp[i]);
                letterDfs(res, tmp, digStr, digits, position+1);
                tmp.pop_back();
            }
        }
    }
};