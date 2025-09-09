class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<pair<int,int>> q; 
        // store {tickets, index} to track person k

        for (int i = 0; i < tickets.size(); i++) {
            q.push({tickets[i], i});
        }

        int sec = 0;

        while (!q.empty()) {
            auto [t, idx] = q.front();
            q.pop();
            
            t--;        // person buys one ticket
            sec++;

            if (t > 0) {
                q.push({t, idx});  // still has tickets, back of line
            }

            if (idx == k && t == 0) {
                return sec;  // kth person finished
            }
        }

        return sec;
    }
};
