class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int res = 0, tmp = 0, sum = 0, total = 0;
        for(int i = 0; i < gas.size(); i++){
            tmp = gas[i] - cost[i];
            sum += tmp;
            total += tmp;
            if(sum < 0){
                sum = 0;
                res = i+1;
            }
        }
        if(total < 0) return -1;
        return res;
    }
};