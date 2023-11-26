class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int i,j,k,count = 0,n = nums.size();
        for(i = 1 ; i<n-1; i++){
            if(nums[i] == nums[i-1])continue;
            j = i-1;k = i+1;
            while(k<n && nums[i]==nums[k]) k++;
            if(k>=n) continue;
            if(nums[j] < nums[i] && nums[i] > nums[k]) count++;
            else if(nums[j] > nums[i] && nums[i] < nums[k]) count++;
        }
        return count;
    }
};