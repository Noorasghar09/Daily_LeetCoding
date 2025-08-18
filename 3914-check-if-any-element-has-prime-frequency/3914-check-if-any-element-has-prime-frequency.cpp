class Solution {
public:
    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int,int> map;
        for(auto it:nums){
            map[it]++;
        }
        for(auto it:map){
            if(isPrime(it.second)){
                return true;
            }
        }
        return false;
    }
    bool isPrime(int num){
        if(num<=1){
            return false;
        }
        else if(num<=3){
            return true;
        }
        else if(num%2 == 0 || num%3==0){
            return false;
        }
        for(int i=5; i<= sqrt(num); i+=6){
            if(num %i==0 || num % (i+2) ==0){
                return false;
            }
        }
        return true;
    }
};
