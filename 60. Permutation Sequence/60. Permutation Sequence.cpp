class Solution {
public:
    string getPermutation(int n, int k) {
        string res;
        vector<int> tmp = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        int num = 1, size = n;
        for(int i = n-1; i > 1; i--) num*=i;
        --k;
        for(int i = 0; i < n ; i++) {
            int digit = k/num;
            k %= num;
            res.push_back(tmp[digit] + '0');
            tmp.erase(tmp.begin()+digit);
            if(size>1) num /= (--size);
        }
        return res;
    }
};