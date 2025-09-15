class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.empty()){
            return ans;
        }
        unordered_map<char, string> map;
        map['2'] = "abc";
        map['3'] = "def";
        map['4'] = "ghi";
        map['5'] = "jkl";
        map['6'] = "mno";
        map['7'] = "pqrs";
        map['8'] = "tuv";
        map['9'] = "wxyz";
        ans.push_back("");
        for(char digit: digits){
            vector<string> temp;
            string letters = map[digit];
            for(string s: ans){
                for(char letter: letters){
                    temp.push_back(s+letter);
                }
            }
            ans = temp;
        }
        return ans;
    }
};