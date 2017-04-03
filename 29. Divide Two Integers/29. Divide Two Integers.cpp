class Solution {
public:
    int divide(int dividend, int divisor) {
        if(divisor == 0 || (dividend == INT_MIN && divisor == -1)) return INT_MAX;
        long long res = 0, tag = 1;
        if((dividend>0 && divisor<0) || (dividend<0 && divisor>0)) tag = -1;
        long long dividendNew = abs((long long)dividend);
        long long divisorNew = abs((long long)divisor);
        if(divisorNew>dividendNew) return 0;
        while(dividendNew >= divisorNew){
            long long divisorTmp = divisorNew, counter = 1;
            while(dividendNew >= (divisorTmp<<1)){
                divisorTmp<<=1;
                counter<<=1;
            }
            res += counter;
            dividendNew -= divisorTmp;
        }
        return tag*res;
    }
};