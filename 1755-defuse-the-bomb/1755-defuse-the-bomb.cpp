class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> res(n, 0);

        if (k == 0) return res;  // case 1: all zeros

        if (k > 0) {  // case 2: sum of next k numbers
            for (int i = 0; i < n; i++) {
                int sum = 0;
                for (int j = 1; j <= k; j++) {
                    sum += code[(i + j) % n]; // wrap around with modulo
                }
                res[i] = sum;
            }
        } else {  // case 3: sum of previous |k| numbers
            k = -k; // make k positive
            for (int i = 0; i < n; i++) {
                int sum = 0;
                for (int j = 1; j <= k; j++) {
                    sum += code[(i - j + n) % n]; // wrap around backwards
                }
                res[i] = sum;
            }
        }

        return res;
    }
};