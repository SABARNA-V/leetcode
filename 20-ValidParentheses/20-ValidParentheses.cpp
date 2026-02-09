// Last updated: 2/9/2026, 4:21:51 PM
class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        unordered_map<char, char> mapping = {{')', '('}, {']', '['}, {'}', '{'}};

        for (char c : s) {
            if (mapping.find(c) == mapping.end()) {
                stack.push(c);
            } else if (!stack.empty() && mapping[c] == stack.top()) {
                stack.pop();
            } else {
                return false;
            }
        }

        return stack.empty();        
    }
};
