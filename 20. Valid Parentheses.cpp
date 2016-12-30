class Solution {
public:
    bool isValid(string s) {
        stack<char> prnt;
        for(char c: s){
            switch(c){
                case'(':
                case'[':
                case'{': prnt.push(c); break;
                case')':if(prnt.empty() || prnt.top()!='(') return false; else prnt.pop(); break;
                case']':if(prnt.empty() || prnt.top()!='[') return false; else prnt.pop(); break;
                case'}':if(prnt.empty() || prnt.top()!='{') return false; else prnt.pop(); break;
                default: ;
            }
        }
        if(prnt.empty()) return true;
        return false;
    }
};