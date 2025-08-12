class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        if(deck.size()<2){return false;}
        unordered_map<int, int> map;
        for(auto it: deck){
            map[it]++;
        }
        int g=0;
        for(auto &it:map){
            g = gcd(g, it.second);
        }
        return g>=2;
    }
};