class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> map;
        vector<string> vec;
        for(auto it:arr){
            map[it]++;
        }
        for(auto it:arr){
            if(map[it] == 1){
                vec.push_back(it);
            }
        }
        if(k <= vec.size()){
            return vec[k-1];
        }
        return "";
    }
};