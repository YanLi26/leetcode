class Solution {
public:
    vector<int> getRow(int rowIndex) {
       vector<int> res;
       if(rowIndex < 0) return res;
       res.push_back(1);
       long element = 1;
       for(int i = 1; i <= rowIndex; i++){
           element *= (rowIndex + 1 - i);
           element /= i;
           res.push_back(element);
       }
      return res;
    }
};