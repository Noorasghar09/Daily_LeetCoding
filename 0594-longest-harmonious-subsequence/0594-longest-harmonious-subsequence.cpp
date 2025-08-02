class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> freq;
        int longest = 0;

        // Count frequency of each number
        for (int num : nums) {
            freq[num]++;
        }

        // Check for each number if its +1 neighbor exists
        for (auto& [num, count] : freq) {
            if (freq.count(num + 1)) {
                longest = max(longest, count + freq[num + 1]);
            }
        }

        return longest;
    }
};