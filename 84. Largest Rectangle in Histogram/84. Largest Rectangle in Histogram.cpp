class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int res = 0;
        for(int i = 0; i < heights.size(); i++) {
            if(i < heights.size() - 1 && heights[i+1] >= heights[i]) continue;
            int minHeight = heights[i];
            for(int j = i; j >=0; j--) {
                minHeight = min(minHeight, heights[j]);
                res = max(res, minHeight*(i-j+1));
            }
        }
        return res;
    }
};