class Solution {
public:
    int maxDifference(string s) {
        int fe=INT_MAX;
        int fo=0;
        unordered_map<char, int> map;
        for(int i=0; i<s.length(); i++){
            map[s[i]]++;
        }
        for(auto it:map){
            if(it.second%2 == 0){
                fe = min(fe, it.second);
            }
            else{
                fo = max(fo, it.second);
            }
        }
        return fo-fe;
    }
};