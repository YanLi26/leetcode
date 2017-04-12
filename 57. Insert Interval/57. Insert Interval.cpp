/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    vector<Interval> insert(vector<Interval>& intervals, Interval newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(), intervals.end(), [](Interval a, Interval b){
            return a.start<b.start;
        });
        int i = 0;
        while(i<intervals.size()-1){
            if(intervals[i].end >= intervals[i+1].start){
                if(intervals[i].end < intervals[i+1].end)
                    intervals[i].end = intervals[i+1].end;
                intervals.erase(intervals.begin()+i+1);
            }
            else ++i;
        }
        return intervals;
    }
};