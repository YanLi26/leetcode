/*http://www.cnblogs.com/grandyang/p/4125510.html*/

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        
        int figures = 1;
        while(x / figures >= 10){
            figures *= 10;
        }
        
        while(x > 0){
            if((x % 10) != (x / figures)) return false;
            x = (x % figures) / 10;
            figures /= 100;
        }
        return true;
    }
};