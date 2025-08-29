class Solution {
public:
    bool halvesAreAlike(string s) {
        int size = s.size();
        int n = size/2;
        string vowels = "aeiouAEIOU";
        int v1=0;
        int v2=0;
        for(int i=0;i<n; i++){
            if(vowels.find(s[i]) != string::npos){
                v1++;
            }
        }
        for(int j=n;j<size; j++){
            if(vowels.find(s[j]) != string::npos){
                v2++;
            }
        }
        if(v1==v2){
            return true;
        }
        return false;
        
    }
};