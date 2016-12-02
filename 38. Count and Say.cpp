class Solution {
public:
    string countAndSay(int n) {
        if(n < 0) return NULL;
        string res;
        res.push_back('1');
        if(n == 1) return res;
        for(int i = 0; i < n - 1; i++){
            string tmp;
            int tag = 1;
            for(int i = 0; i < res.size(); i++){
                if(i == res.size() - 1){
                    tmp.push_back(tag+'0');
                    tmp.push_back(res[i]);
                }
                else if(res[i] == res[i+1]){
                    tag++;
                }
                else if(res[i] != res[i+1]){
                    tmp.push_back(tag+'0');
                    tmp.push_back(res[i]);
                    tag = 1;
                }
            }
            res = tmp;
        }
        return res;
    }
};