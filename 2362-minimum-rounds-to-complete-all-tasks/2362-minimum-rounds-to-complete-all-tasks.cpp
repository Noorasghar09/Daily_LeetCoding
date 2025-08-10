class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        sort(tasks.begin(), tasks.end());
        unordered_map<int, int> map;
        for(auto it:tasks){
            map[it]++;
        }
        int rounds=0;
        for(auto &it:map){
            int freq = it.second;
            if(freq<2){
                return -1;
            }
            rounds += (freq+2)/3;
        }
        return rounds;
    }
};