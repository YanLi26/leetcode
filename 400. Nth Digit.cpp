class Solution {
public:
    int findNthDigit(int n) {
        int digit = 1, res = 0, num = 0;
        vector<int> nums;
        while(n > 9*pow(10, digit-1)*digit){
            n -= 9*pow(10, digit-1)*digit;
            digit++;
        }
        num = pow(10, digit-1) + n/digit - 1;
        if(n%digit == 0) res = num%10;
        else{
            num++;
            while(num){
                nums.push_back(num%10);
                num /= 10;
            }
            reverse(nums.begin(),nums.end());
            res = nums[n%digit - 1];
        }
        
        return res;
    }
};