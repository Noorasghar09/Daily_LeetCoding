class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> freq;
        int ans = -1;
        int maxFreq = 0;

        // Count frequencies of even numbers
        for (auto it : nums) {
            if (it % 2 == 0) {
                freq[it]++;
            }
        }

        // If no even number
        if (freq.empty()) return -1;

        // Find most frequent even (smallest if tie)
        for (auto &p : freq) {
            if (p.second > maxFreq || 
               (p.second == maxFreq && p.first < ans)) {
                maxFreq = p.second;
                ans = p.first;
            }
        }

        return ans; 
    }
};