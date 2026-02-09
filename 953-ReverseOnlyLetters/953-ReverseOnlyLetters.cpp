// Last updated: 2/9/2026, 4:21:29 PM
class Solution {
public:
    string reverseOnlyLetters(string s) {
    int f=0;
        int l=s.size()-1;
        while(f<l)
        {
            while(f<l && !isalpha(s[f]))
            {
                f++;
            }
            while(f<l && !isalpha(s[l]))
            {
                l--;
         }
            if (f < l) {
                swap(s[f], s[l]);
                f++;
                l--;
            }
        }
        return s;    
    }
};