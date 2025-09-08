class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        unordered_map<string, int> map;
        for(int i=0; i<senders.size(); i++){
            int count = countWords(messages[i]);
            map[senders[i]] += count;
        }
        string ans = "";
        int maxCount = -1;

        for (auto& it : map) {
            if (it.second > maxCount || 
               (it.second == maxCount && it.first > ans)) {
                maxCount = it.second;
                ans = it.first;
            }
        }
        return ans;
    }
    int countWords(string message){
        int words =1;
        for(int i=0; i<message.size(); i++){
            if(message[i] == ' '){
                words++;
            }
        }
        return words;
    }
};