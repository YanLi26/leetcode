//recursion
class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> ans;
        getGrayCode(n, 0, ans);
        return ans;
    }
    void getGrayCode(int n, int tmp, vector<int>& ans){
        if(find(ans.begin(), ans.end(), tmp) == ans.end()) ans.push_back(tmp);
        for(int i = 0; i < n; i++){
            int numTmp;
            if((tmp & (1<<i)) == 0) numTmp = tmp | (1<<i);
            else numTmp = tmp & ~(1<<i);
            if(find(ans.begin(), ans.end(), numTmp) == ans.end()) getGrayCode(n, numTmp, ans);
        }
    }
};