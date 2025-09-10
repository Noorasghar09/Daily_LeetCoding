class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;  // stores indices
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            // Remove elements out of window from front
            if (!dq.empty() && dq.front() <= i - k) {
                dq.pop_front();
            }

            // Remove all smaller elements from back
            while (!dq.empty() && nums[dq.back()] < nums[i]) {
                dq.pop_back();
            }

            dq.push_back(i);

            // Record max when window is ready
            if (i >= k - 1) {
                ans.push_back(nums[dq.front()]);
            }
        }
        return ans;
    }
};