// Last updated: 2/9/2026, 4:21:22 PM
class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
     unordered_map <char,vector<int>> mp;
        for (int i=0;i<s.size();i++){
            mp[s[i]].push_back(i);
        }
        for (auto &it:mp){
            if (distance[it.first-'a']!=it.second[1]-it.second[0]-1){
                return false;
            }
        }
        return true;    
    }
};