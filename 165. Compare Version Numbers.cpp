//atoi(a.c_str())
//a.clear();
class Solution {
public:
    int compareVersion(string version1, string version2) {
        string a, b;
        int i = 0, j = 0;
        while(i < version1.size() || j < version2.size()){
            while(i < version1.size() && version1[i] != '.'){
                a.push_back(version1[i]);
                i++;
            }
            while(j < version2.size() && version2[j] != '.'){
                b.push_back(version2[j]);
                j++;
            }
            if(atoi(a.c_str()) > atoi(b.c_str())) return 1;
            else if(atoi(a.c_str()) < atoi(b.c_str())) return -1;
            a.clear();
            b.clear();
            i++;
            j++;
        }
        return 0;
    }
};