class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int duplicate = 0;

        for(int n : nums){
            if(nums[abs(n) - 1] < 0){
                duplicate = abs(n);
            }
            else{
                nums[abs(n) - 1] *= -1;
            }
        }
        for(int j = 0; j < nums.size() ; j++){
            if(nums[j] > 0)
                return{duplicate, j+1};
        }
        return{};
    }
};