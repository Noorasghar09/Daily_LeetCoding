class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> freq;
        for (char c : text) {
            freq[c]++;
        }

        // word we want to form
        string word = "balloon";
        unordered_map<char, int> need;
        for (char c : word) {
            need[c]++;
        }

        int ans = INT_MAX;
        for (auto &it : need) {
            char c = it.first;
            int required = it.second;
            ans = min(ans, freq[c] / required);
        }

        return ans;
    }
};
