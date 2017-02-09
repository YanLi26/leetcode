class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_set<char> row1 {'q', 'w', 'e', 'r', 't', 'y','u', 'i', 'o', 'p'};
        unordered_set<char> row2 {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'}; 
        unordered_set<char> row3 { 'z', 'x', 'c', 'v', 'b' ,'n', 'm'};
        vector<string> res;
        
        for(int i = 0; i < words.size(); i++){
            int tag = 0;
            for(int j = 0; j < words[i].size(); j++){
                if(row1.find(words[i][j])!=row1.end()){
                    if(tag == 0) tag = 1;
                    if(tag != 0 && tag != 1){
                        tag = 0;
                        break;
                    }
                }
                else if(row2.find(words[i][j])!=row2.end()){
                    if(tag == 0) tag = 2;
                    if(tag != 0 && tag != 2){
                        tag = 0;
                        break;
                    }
                }
                else if(row3.find(words[i][j])!=row3.end()){
                    if(tag == 0) tag = 3;
                    if(tag != 0 && tag != 3){
                        tag = 0;
                        break;
                    }
                }
            }
            if(tag != 0) res.push_back(words[i]);
        }
        return res;
    }
};