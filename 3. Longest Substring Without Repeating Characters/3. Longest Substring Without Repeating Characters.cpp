class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0) return 0;
        vector<int> map(256,-1);
        int ans = 0, left = 0, size = s.size();
        for(int i = 0; i < size; i++){
            //没出现过存储位置信息，出现过对比substring大小，更新left
            if(map[s[i]] != -1){
                ans = max(ans, i-left);
                left = max(left, map[s[i]] + 1);
            }
            map[s[i]] = i;
        }
        ans = max(ans, size-left);
        return ans;
    }
};