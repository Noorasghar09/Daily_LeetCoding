class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        string vowels = "aeiou";
        int ans=0;
        for(int i=left; i<=right; i++){
            char f = words[i][0];
            char l = words[i][words[i].size()-1];
            if(vowels.find(f) != string::npos && vowels.find(l) != string::npos){
                ans++;
            }
        }
        return ans;
    }
};