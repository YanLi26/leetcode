//KMP
//http://www.cnblogs.com/grandyang/p/6087347.html
class Solution {
public:
    bool repeatedSubstringPattern(string str) {
        vector<int> next(str.size() + 1, 0);
        int i = 1, j = 0;
        while(i < str.size()){
            if(str[i] == str[j]) next[++i] = ++j;
            else if(j == 0) i++;
            else j = next[j];
        }
        return next[str.size()]&&next[str.size()]%(str.size()-next[str.size()])==0;
    }
};



