//it can use set too

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> map;
        vector<int> result;
        
        for(int n: nums1) map[n]=1;
        for(int n: nums2){
            if(--map[n] == 0)
                result.push_back(n);
        }
        return result;
    }
};
