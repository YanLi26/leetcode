class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> count;
        for(int num: nums){
            count.insert(num);
        }
        nums.clear();
        for(auto it = count.begin(); it != count.end(); it++){
            nums.push_back(*it);
        }
        return count.size();
    }
};