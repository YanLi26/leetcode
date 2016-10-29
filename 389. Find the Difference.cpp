/* accumulate all of the char of t
 * subtract all of the char of s
 * the remain one is the answer
 */

class Solution {
public:
    char findTheDifference(string s, string t) {
        char a=0;
        char c;
        for(char c: t) a+=c;
        for(char c: s) a-=c;
        return a;
    }
};
