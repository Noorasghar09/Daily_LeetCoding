class Solution {
public:
    bool digitCount(string num) {
        unordered_map<int, int> freq;
        for(auto it: num){
            freq[it-'0']++;
        }
        for(int i=0; i<num.size(); i++){
            int number = num[i]-'0';
            if(freq[i] != number){
                return false;
            }
        }
        return true;
    }
};