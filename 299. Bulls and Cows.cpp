class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls = 0, cows = 0;
        unordered_map<char,int> map;
        for(int i = 0; i < secret.size(); i++){
            if(secret[i] == guess[i]){
                bulls++;
                secret[i] = '.';
                guess[i] = '.';
            }
        }
        for(char a: secret) map[a]=0;
        for(char a: secret) map[a]++;
        for(int i = 0; i < secret.size(); i++){
            if(guess[i]!= '.' && map[guess[i]] > 0){
                cows++;
                map[guess[i]]--;
            }
        }
        string res;
        res = to_string(bulls) + 'A' + to_string(cows) + 'B';
        return res;
    }
};