class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int> freq;
        for (char t : tasks) {
            freq[t]++;
        }

        int maxFreq = 0;
        for (auto &p : freq) {
            maxFreq = max(maxFreq, p.second);
        }

        int maxCount = 0;
        for (auto &p : freq) {
            if (p.second == maxFreq) maxCount++;
        }

        int partCount = maxFreq - 1;
        int partLength = n + 1;
        int intervals = partCount * partLength + maxCount;

        return max((int)tasks.size(), intervals);
    }
};