class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i = 0; i<n-2 ; ){
            if(nums[i] == nums[i+1] && nums[i] == nums[i+2])
                i=i+3;
            else return nums[i];
        }
        return nums[n-1];
    }
};