class Solution {
public:
    string addBinary(string a, string b) {
        int curr = 0, aSize = a.size() - 1, bSize = b.size() - 1;
        string res;
        while(aSize >= 0 || bSize >= 0){
            char ai, bi;
            if(aSize >= 0) ai = a[aSize]; else ai = '0';
            if(bSize >= 0) bi = b[bSize]; else bi = '0';
            char tmp = ai+bi+curr-'0';
            if(tmp > '1'){
                curr = 1;
                res.push_back(tmp-2);
            }
            else{
                curr = 0;
                res.push_back(tmp);
            }
            aSize--; bSize--;
        }
        if(curr == 1) res.push_back('1');
        reverse(res.begin(),res.end());
        return res;
    }
};