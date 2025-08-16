class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int, int> map;
        for(auto it:nums){
            map[it]++;
        }
        int pairs=0;
        int integers=0;
        for(auto it:map){
            pairs += it.second/2;
            integers += it.second%2;
        }
        return {pairs, integers};
    }
};