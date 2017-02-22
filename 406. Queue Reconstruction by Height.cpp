//http://www.cnblogs.com/grandyang/p/5928417.html
class Solution {
public:
    vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>& people) {
        sort(people.begin(), people.end(), comFunction);
        vector<pair<int, int>> res;
        for (auto peoPair : people) {
            res.insert(res.begin() + peoPair.second, peoPair);
        }
        return res;
    }
    static bool comFunction(const pair<int, int>& a, const pair<int, int>& b){
        return a.first > b.first || (a.first == b.first && a.second < b.second);
    }
};