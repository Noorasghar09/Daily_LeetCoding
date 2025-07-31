class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for(int i=0; i<nums.size(); i++){
            int sec = target - nums[i];
            if(map.find(sec) != map.end()){
                return {map[sec], i};
            }
            map[nums[i]] = i;
        }
        return {0};
    }
};