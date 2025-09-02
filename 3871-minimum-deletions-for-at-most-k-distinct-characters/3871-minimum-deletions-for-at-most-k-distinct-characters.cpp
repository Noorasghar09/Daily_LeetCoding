class Solution {
public:
    int minDeletion(string s, int k) {
        unordered_map<char, int> map;
        for(auto it:s){
            map[it]++;
        }
        vector<pair<char, int>> vec(map.begin(), map.end());
        sort(vec.begin(), vec.end(), [](auto &a, auto &b){
            return a.second < b.second;
        });
        int d = map.size();
        if(d<=k){
            return 0;
        }
        int del=0;
        int needToDel = d-k;
        for(int i=0; i<needToDel; i++){
            del += vec[i].second;
        }
        return del;

    }
};