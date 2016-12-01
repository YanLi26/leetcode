// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int maxNumber = n, minNumber = 1;
            while(minNumber <= maxNumber){
            int midNumber = (maxNumber - minNumber)/2 + minNumber;
            int res = guess(midNumber);
            if(res == 0) return midNumber;
            else if(res == -1) maxNumber = midNumber - 1;
            else if(res == 1) minNumber = midNumber + 1;
        }
        return -1;
    }
};