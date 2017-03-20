class Solution {
public:
    string longestPalindrome(string s) {
        if(s.empty()) return "";
        
        stack<int> loPali;
        string ans;
        
        //find all palindrom
        for(int i = 0; i < s.size(); i++){
            int cntOdd = 1, cntEven = 0, j = 0;
            //if this palindrom has odd numbers
            for(int j = 1; i-j >= 0 && i+j < s.size(); j++){
                if(s[i-j] == s[i+j]) cntOdd+=2;
                else break;
            }
            //if the palindrom has even numbers
            for(int j = 0; i-j >= 0 && i+j+1 < s.size(); j++){
                if(s[i-j] == s[i+j+1]) cntEven+=2;
                else break;
            }
            //push the longest one's position and length in stack
            int cnt = max(cntEven,cntOdd);
            if(loPali.empty()){
                loPali.push(i);
                loPali.push(cnt);
            }
            else if(cnt > loPali.top()){
                loPali.pop(); loPali.pop();
                loPali.push(i); loPali.push(cnt);
            }
        }

        //cout
        int cnt = loPali.top(); loPali.pop();
        cout<<cnt;
        int position = loPali.top();
        if(cnt%2 == 0){
            for(int i = position - cnt/2 + 1; i <= position + cnt/2; i++){
                ans.push_back(s[i]);
            }
        }
        else{
            for(int i = position - cnt/2; i < position + cnt/2 + 1; i++){
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};