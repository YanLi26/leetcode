//http://www.cnblogs.com/grandyang/p/5454125.html
//priority_queue
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        map<int,int> numsMap;
        for(int num: nums) numsMap[num]++;
        priority_queue<pair<int, int>> q;
        for (auto it : numsMap) q.push({it.second, it.first});
        for (int i = 0; i < k; ++i) {
            res.push_back(q.top().second); q.pop();
        }
        return res;
    }
};