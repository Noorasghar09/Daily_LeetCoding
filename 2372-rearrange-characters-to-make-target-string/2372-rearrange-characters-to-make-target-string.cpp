class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char, int> map;
        for(auto it:s){
            map[it]++;
        }
        unordered_map<char, int> need;
        for(auto it:target){
            need[it]++;
        }
        int ans = INT_MAX;
        for(auto &it: need){
            char c = it.first;
            int req = it.second;
            ans = min(ans, map[c]/req);
        }
        return ans;
    }
};