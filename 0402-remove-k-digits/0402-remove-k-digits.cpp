class Solution {
public:
    string removeKdigits(string num, int k) {
        string stack = "";

    for (char c : num) {
        // remove larger digits from stack if possible
        while (!stack.empty() && k > 0 && stack.back() > c) {
            stack.pop_back();
            k--;
        }
        stack.push_back(c);
    }

    // if k still > 0, remove from end
    while (k > 0 && !stack.empty()) {
        stack.pop_back();
        k--;
    }

    // remove leading zeros
    int i = 0;
    while (i < stack.size() && stack[i] == '0') i++;

    string result = stack.substr(i);

    return result.empty() ? "0" : result;
    }
};