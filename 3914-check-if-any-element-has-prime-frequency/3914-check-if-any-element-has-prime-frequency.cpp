class Solution {
public:
    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int,int> map;
        for(auto it:nums){
            map[it]++;
        }
        for(auto it:map){
            if(it.second ==2 || it.second ==3 || it.second ==5 || it.second ==7){
                return true;
            }
            if(it.second ==1 || it.second%2 ==0 || it.second%3 ==0 || it.second%5 ==0 || it.second%7 ==0){
                continue;
            }
            return true;
        }
        return false;
    }
};
