class Solution {
public:
    int maxDepth(string s) {
        int depth =0;
        int maxDep = 0;
        for(char c:s){
            if(c == '('){
                depth++;
                maxDep = max(maxDep, depth);
            }
            else if(c == ')'){
                depth--;
            }
        }
        return maxDep;
    }
};
