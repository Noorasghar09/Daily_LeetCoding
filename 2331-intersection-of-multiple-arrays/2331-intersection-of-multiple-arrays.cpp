class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int, int> map;
        vector<int> vec;
        int size = nums.size();
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums[i].size();j++){
                map[nums[i][j]]++;
            }
        }
        for(auto it: map){
            if(it.second == size){
                vec.push_back(it.first);
            }
        }
        sort(vec.begin(), vec.end());
        return vec;
    }
};