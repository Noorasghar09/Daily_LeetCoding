class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> map;
        for(auto it:nums){
            map[it]++;
        }
        int high=0;
        int element=0;
        for(auto it:map){
            if(it.second > high){
                element = it.first;
                high = it.second;
            }
        }
        int ans=0;
        for(auto it:map){
            if(it.second == high){
                ans += it.second;
            }
        }
        return ans;
    }
};