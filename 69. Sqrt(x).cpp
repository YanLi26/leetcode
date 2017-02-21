//binary search
class Solution {
public:
    int mySqrt(int x) {
        int res;
        long long left = 0, right = x/2 + 1, middle;
        while(left <= right){
            middle = (left+right)/2;
            if(middle*middle == x) return middle;
            else if(middle*middle < x) left = middle + 1;
            else right = middle - 1;
        }
        return right;
    }
};