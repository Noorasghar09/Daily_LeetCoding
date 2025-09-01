class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        unordered_map<string, int> map;
        for(auto resp:responses){
            unordered_set<string> unique(resp.begin(), resp.end());
            for(auto &it: unique){
                map[it]++;
            }
        }
        int max=0;
        string ans ="";
        for(auto &it: map){
            if(it.second > max || (it.second == max && it.first< ans)){
                max = it.second;
                ans = it.first;
            }
        }
        return ans;
    }
};