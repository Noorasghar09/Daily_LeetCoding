class Solution {
public:
    string frequencySort(string s) {
        string ans="";
        unordered_map<char, int> freqMap;
        for(auto it:s){
            freqMap[it]++;
        }
        vector<pair<char, int>> freqVec(freqMap.begin(), freqMap.end());
        sort(freqVec.begin(), freqVec.end(), [](auto &a, auto &b){
            return a.second > b.second;
        });
        for(auto it:freqVec){
            ans.append(it.second, it.first);
        }
        return ans;
    }
};