class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num < 0) return false;
        if(num <= 1) return true;
        int high = num, low = 0;
        long tmp = num;
        while(low == 0 && tmp > 1){
            tmp /= 2;
            if(tmp*tmp > num) high = tmp;
            if(tmp*tmp < num) low = tmp;
        }
        for(int i = low; i <= high; i++){
            if(i*i == num) return true;
        }
        return false;
    }
};