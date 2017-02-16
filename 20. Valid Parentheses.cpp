class Solution {
public:
    bool isValid(string s) {
        stack<char> tmp;
        for(char a: s){
            if(a == '(' || a == '[' || a == '{') tmp.push(a);
            else{
                if(tmp.empty()) return false;
                else{
                    if(a == ')'){
                        if(tmp.top() == '(') tmp.pop();
                        else return false;
                    }
                    if(a == ']'){
                        if(tmp.top() == '[') tmp.pop();
                        else return false;
                    }
                    if(a == '}'){
                        if(tmp.top() == '{') tmp.pop();
                        else return false;
                    }
                }
            }
        }
        if(!tmp.empty()) return false;
        return true;
    }
};