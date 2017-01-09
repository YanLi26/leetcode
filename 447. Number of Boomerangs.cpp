class Solution {
public:
    int numberOfBoomerangs(vector<pair<int, int>>& points) {
        int res = 0;
        for(int i = 0; i < points.size(); i++){
            unordered_map<long,int> tmp;
            for(int j = 0; j < points.size(); j++){
                if(j != i){
                    tmp[pow(points[j].first - points[i].first, 2) + pow(points[j].second - points[i].second, 2)]++;
                }
            }
            for(auto k: tmp){
                res += k.second*(k.second - 1);
            }
        }
        return res;
    }
};