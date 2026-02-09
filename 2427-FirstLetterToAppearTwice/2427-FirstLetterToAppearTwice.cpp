// Last updated: 2/9/2026, 4:21:20 PM
class Solution {
public:
    char repeatedCharacter(string s) {
       unordered_map<char,int>m;
    for(char c:s){
        m[c]++;
        if(m[c]==2) {
            return c;
            break;
        }
    }
    return 0;  
    }
};