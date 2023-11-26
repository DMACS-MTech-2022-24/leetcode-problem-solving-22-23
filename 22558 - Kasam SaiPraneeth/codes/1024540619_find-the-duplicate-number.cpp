class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int j=1; j<n; j++){
            if(nums[j] == nums[j-1]){
                return nums[j];
                break;
            }
        }
        return 0;
    }
};