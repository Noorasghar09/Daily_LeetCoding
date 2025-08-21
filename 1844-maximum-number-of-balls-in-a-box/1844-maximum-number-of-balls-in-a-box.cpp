class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int, int> map;
        for(int i=lowLimit; i<=highLimit; i++){
            int sum=0;
            int num = i;
            while(num>0){
                int digit = num%10;
                sum += digit;
                num = num/10; 
            }
            map[sum]++;
        }
        int largest=0;
        for(auto it:map){
            if(it.second > largest){
                largest = it.second;
            }
        }
        return largest;
    }
};