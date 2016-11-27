class Solution {
public:
    int rob(vector<int>& nums) {
 
        //odd number and even number
        int oddNum = 0, evenNum = 0;
        for(int i = 0; i < nums.size(); i++){
            if(i % 2 == 0){
                evenNum += nums[i];
                //add every evenNum, but if it less than the sum of oddNum, choose the max one
                evenNum = max(evenNum, oddNum);
            }
            else if(i % 2 == 1){
                oddNum += nums[i];
                oddNum = max(evenNum, oddNum);
            }
        }
        return max(oddNum, evenNum);
    }
};