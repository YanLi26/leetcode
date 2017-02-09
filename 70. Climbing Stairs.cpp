//http://www.cnblogs.com/grandyang/p/4079165.html
class Solution {
public:
    int climbStairs(int n) {
        if(n <= 1) return 1;
        vector<int>stair(n);
        stair[0] = 1;
        stair[1] = 2;
        for(int i = 2; i < n; i ++){
            stair[i] = stair[i-1] + stair[i-2];
        }
        return stair.back();
    }
};