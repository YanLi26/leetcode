// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int high = n , low = 1;
        while(guess(n) != 0){
            n = low + (high - low)/2;
            if(guess(n) == -1) high = n - 1;
            else if(guess(n) == 1) low = n + 1;
        }
        return n;
    }
};