class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> vec;
        unordered_map<int, int> map;
        for(auto it:nums){
            map[it]++;
        }
        int n = nums.size();
        int margin = n/3;
        for(auto it:map){
            if(it.second > margin){
                vec.push_back(it.first);
            }
        }
        return vec;
    }
};