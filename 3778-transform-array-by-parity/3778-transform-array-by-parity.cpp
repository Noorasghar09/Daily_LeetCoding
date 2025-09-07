class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int even=0;
        int odd=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2 == 0){
                even++;
            }
            else{
                odd++;
            }
        }
        vector<int> vec;
        for(int i=0; i<even; i++){
            vec.push_back(0);
        }
        for(int j=0; j<odd; j++){
            vec.push_back(1);
        }
        return vec;
    }
};