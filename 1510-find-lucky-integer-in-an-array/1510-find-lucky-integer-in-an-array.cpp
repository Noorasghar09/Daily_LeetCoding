class Solution {
public:
    int findLucky(vector<int>& arr) {
        int largest=-1;
        unordered_map<int, int> map;
        for(auto it:arr){
            map[it]++;
        }
        for(auto i:map){
            if(i.first == i.second){
                largest = max(largest, i.first);
            }
        }
        return largest;
    }
};