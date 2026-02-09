// Last updated: 2/9/2026, 4:21:33 PM
class Solution {
public:
    string reverseVowels(string s) {
     int l = 0, r = s.length() - 1;
        while (l < r) {
            while (l < r && !isVowel(s[l])) l++; 
            while (l < r && !isVowel(s[r])) r--; 
            
            swap(s[l], s[r]);
            l++;
            r--;
        }
        return s;
    }

private:
    bool isVowel(char c) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            return true;
        return false;    
    }
};