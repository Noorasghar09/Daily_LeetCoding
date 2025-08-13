class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum=0;
        unordered_map<int, int> map;
        for(auto it:nums){
            map[it]++;
        }
        for(auto it:map){
            if(it.second == 1){
                sum += it.first;
            }
        }
        return sum;
    }
};