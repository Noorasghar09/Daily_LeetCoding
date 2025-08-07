class Solution {
public:
    int maxFreqSum(string s) {
        int fc=0;
        int fv=0;
        unordered_map<char, int> map;
        for(auto it:s){
            map[it]++;
        }
        for(auto it:map){
            if(it.first == 'a' || it.first == 'e' || it.first == 'i' || it.first == 'o' || it.first == 'u'){
                fv = max(fv, it.second);
            }
            else{
                fc = max(fc, it.second);
            }
        }
        return fv+fc;
    }
};
