class NumArray {
public:
    NumArray(vector<int> nums) {
        dp = nums;
        for(int i = 1; i < dp.size(); i++){
            dp[i] += dp[i-1];
        }
    }
    
    int sumRange(int i, int j) {
        if(i==0) return dp[j];
        else return dp[j]-dp[i-1];
    }
private:
    vector<int> dp;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */