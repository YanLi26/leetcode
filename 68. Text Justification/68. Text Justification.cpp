class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        if(maxWidth == 0) return {""};
        vector<string> res;
        int start = 0, size = 0;
        for(int i = 0; i < words.size(); i++) {
            size += words[i].size();
            if((size+i-start) > maxWidth) {
                size -= words[i].size();
                string tmp;
                int space = maxWidth - size, oneSpace;
                int num = i - start - 1;
                if(i - start - 1 > 0) {
                    oneSpace = space/(i - start - 1);
                    int resSpace = space - num*oneSpace;
                    for(int j = start; j < i; j++) {
                        tmp += words[j];
                        string s;
                        if(resSpace > 0) {
                            for(int z = 0; z < oneSpace + 1; z++) s+= ' ';
                            space -= (1+oneSpace);
                            --resSpace;
                            --num;
                        }
                        else if(num > 0) {
                            for(int z = 0; z < oneSpace; z++) s+=' ';
                            space -= oneSpace;
                            --num;
                        }
                        tmp += s;
                    }
                }
                else if(i - start - 1 == 0) {
                    tmp += words[start];
                    string s;
                    for(int z = 0; z < space; z++) s+= ' ';
                    tmp += s;
                }
                res.push_back(tmp);
                start = i; size = 0; --i;
            }
        }
        int space = maxWidth - size;
        string tmp;
        for(int i = start; i < words.size(); i++) {
            tmp += words[i];
            if(i!= words.size()-1) {
                tmp += ' ';
                space -= 1;
            }
        }
        if(space > 0) {
            for(int j = 0; j < space; j++) tmp += ' ';
        }
        res.push_back(tmp);
        return res;
    }
};