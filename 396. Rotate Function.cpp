class Solution {
public:
    int maxRotateFunction(vector<int>& A) {
        if(A.size()==0) return 0;
        long res = 0, tmp = 0, sum = 0;
        for(int j = 0; j < A.size(); j++){
            sum += A[j];
            res += A[j]*j;
        }
        
        tmp = res;
        for (int i = 1; i < A.size(); ++i) {
            tmp = tmp + sum - A.size() * A[A.size()-i];
            res = max(res, tmp);
        }

        return res;
    }
};