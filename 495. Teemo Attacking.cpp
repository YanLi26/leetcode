class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int res = timeSeries.size()*duration;
        if(timeSeries.size() <= 1) return res;
        for(int i = 1; i < timeSeries.size(); i++){
            int tmp = timeSeries[i] - timeSeries[i-1];
            if(tmp < duration) res -= (duration - tmp);
        }
        return res;
    }
};