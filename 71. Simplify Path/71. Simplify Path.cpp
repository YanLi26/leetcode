class Solution {
public:
    string simplifyPath(string path) {
        stack<string> pathStr;
        string res;
        int i = 0;
        while(i < path.size()) {
            if(path[i] == '/') {
                int start = i+1, j = i+1;
                for(; j < path.size(); j++) {
                    if(path[j] == '/') break;
                }
                i = j;
                string tmp = path.substr(start, j-start);
                if(tmp == "..") {
                    if(!pathStr.empty()) pathStr.pop();
                }
                else if(tmp == "." || tmp == "") continue;
                else pathStr.push(tmp);
            }
        }
        if(pathStr.empty()) return "/";
        while(!pathStr.empty()) {
            res = pathStr.top() + res;
            res = '/' + res;
            pathStr.pop();
        }
        return res;
    }
};