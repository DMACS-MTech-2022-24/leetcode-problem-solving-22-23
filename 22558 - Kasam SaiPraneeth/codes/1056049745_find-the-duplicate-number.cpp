class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());//sort the vecotr first
        int n = nums.size();
        for(int j=1; j<n; j++){ //trivese the vector untill finds the duplicate number
            if(nums[j] == nums[j-1]){ //checking the adjacent values 
                return nums[j]; //if true return the nums[j] value
                break; //then break
            }
        }
        return 0;
    }
};