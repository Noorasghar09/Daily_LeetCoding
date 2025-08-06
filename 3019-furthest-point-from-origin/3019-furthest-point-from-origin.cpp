class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int left = count(moves.begin(), moves.end(), 'L');
        int right = count(moves.begin(), moves.end(), 'R');
        int line=0;
        for(int i=0; i<moves.size(); i++)
        {
            if(moves[i] == 'L'){
                line--;
            }
            else if(moves[i] == 'R'){
                line++;
            }
            else{
                if(left>right){
                    line--;
                }
                else{
                    line++;
                }
            }
        }
        return abs(line);
    }
};