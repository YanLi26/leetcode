class Solution {
public:
    string addBinary(string a, string b) {
        string res = "";
        int tmp = 0;
        for(int i = a.size() - 1, j = b.size() - 1; i >= 0 || j >= 0; i--, j--){
            char ai, bi;
            if(i >= 0) ai = a[i]; else ai = '0';
            if(j >= 0) bi = b[j]; else bi = '0';
            char m = ai + bi + tmp - '0';
            if(m > '1'){
                res.insert(res.begin(), m-2);
                tmp = 1;
            }
            else{
                res.insert(res.begin(), m);
                tmp = 0;
            }
        }
        if(tmp == 1) res.insert(res.begin(), '1');
        return res;
    }
};