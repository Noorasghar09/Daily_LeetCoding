class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> map1;
        unordered_map<string, int> map2;
        for(auto it:words1){
            map1[it]++;
        }
        for(auto it:words2){
            map2[it]++;
        }
        int ans=0;
        for(auto it:map1){
            if(it.second == 1){
                if(map2.find(it.first) != map2.end() && map2[it.first] == 1){
                    ans++;
                }
            }
        }
        return ans;
    }
};