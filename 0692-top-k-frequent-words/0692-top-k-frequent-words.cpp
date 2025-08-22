class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> map;
        vector<string> ans;
        for(auto it:words){
            map[it]++;
        }
        vector<pair<string, int>> vec(map.begin(), map.end());
        sort(vec.begin(), vec.end(), [](auto &a, auto &b){
            if (a.second == b.second) 
                return a.first < b.first;   // alphabetically smaller first
            return a.second > b.second; 
        });
        int limit = min(k, (int)vec.size());
        for(int i=0; i<k; i++){
            ans.push_back(vec[i].first);
        }
        return ans;
    }
};