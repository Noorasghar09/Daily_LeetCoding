class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> map;
        for(auto it:s){
            map[it]++;
        }
        int occur = map[s[0]];
        for(auto it:map){
            if(it.second != occur){
                return false;
            }
        }
        return true;
    }
};