class Solution {
public:
    vector<int> constructRectangle(int area) {
        int tmp = sqrt(area);
        vector<int> res;
        while(1){
            if(area % tmp == 0 && tmp >= (area/tmp)){
                res.push_back(tmp);
                res.push_back(area/tmp);
                break;
            }
            else tmp++;
        }
     return res;   
    }
};