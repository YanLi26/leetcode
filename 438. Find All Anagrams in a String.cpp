class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        unordered_map<char, int> map;
        if (s.empty() || p.empty()) return res;
        int length_p = p.size(), length_s = s.size(), left = 0, right = 0;
        for(char c: p) map[c] = 0;
        for(char c: p) map[c]++;
        
        while(right < length_s){
            if(map[s[right++]]-- > 0) --length_p;
            if(length_p == 0) res.push_back(left);
            if(right - left == p.size() && map[s[left++]]++ >= 0) ++length_p;
        }
        
        return res;
    }
};