class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans=0;
        for(int i=0; i<words.size(); i++){
            bool find=true;
            for(int j=0; j<words[i].size(); j++){
                char ch = words[i][j];
                if(allowed.find(ch) == string::npos){
                    find = false;
                    break;
                }
            }
            if(find == true){
                ans++;
            } 
        }
        return ans;
    }
};