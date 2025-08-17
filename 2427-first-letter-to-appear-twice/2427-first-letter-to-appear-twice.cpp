class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char, int> map;
        for(auto it:s){
            map[it]++;
            if(map[it] == 2){
                return it;
            }
        }
        return ' ';
    }
};