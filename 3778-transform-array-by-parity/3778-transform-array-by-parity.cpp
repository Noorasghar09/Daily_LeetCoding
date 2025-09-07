class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        vector<int> vec;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2 == 0){
                vec.push_back(0);
            }
            else{
                vec.push_back(1);
            }
        }
        sort(vec.begin(), vec.end());
        return vec;
    }
};