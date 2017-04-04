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
    vector<Interval> merge(vector<Interval>& intervals) {
       sort(intervals.begin(), intervals.end(), [](Interval& a, Interval& b){return a.start<b.start;});
       if(intervals.size() < 2) return intervals;
       vector<Interval> res;
       int left = intervals[0].start, right = intervals[0].end;
       for(int i = 1; i < intervals.size(); i++){
           if(right >= intervals[i].start){
               if(right >= intervals[i].end) continue;
               else right = intervals[i].end;
           }
           else{
               Interval tmp(left,right);
               res.push_back(tmp);
               left = intervals[i].start; right = intervals[i].end;
           }
       }
       Interval tmp(left,right);
       res.push_back(tmp);
       return res;
    }
};