class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        if(A.size() < 3) return 0;
        int res = 0, diffVal = A[1] - A[0], len = 2;
        for(int i = 2; i < A.size(); i++){
            if(A[i] - A[i-1] == diffVal) len++;
            else{
                if(len >= 3) res += (len - 1)*(len - 2)/2;
                diffVal = A[i] - A[i - 1];
                len = 2;
            }
        }
        if(len >= 3) res += (len - 1)*(len - 2)/2;
        return res;
    }
};