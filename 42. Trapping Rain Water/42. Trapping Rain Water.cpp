class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size() < 3) return 0;
        int res = 0;
        vector<int> water;
        water.push_back(height[0]);
        for(int i = 1; i < height.size(); i++){
            if(height[i] > water.back()) water.push_back(height[i]);
            else water.push_back(water.back());
        }
        int rightMax = height[height.size() - 1];
        for (int i = height.size() - 1; i >= 0; i--) {
            water[i] = min(water[i], rightMax);
            rightMax = max(rightMax, height[i]);
            if(water[i] > height[i]) res += water[i] - height[i];
        }
        return res;
    }
};