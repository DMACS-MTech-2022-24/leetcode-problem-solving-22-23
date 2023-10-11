class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i=0;
        int n = nums.size();
        if(n==1) return nums[0];
        while(i<n-1){
            if(nums[i]!=nums[i+1]){
                return nums[i];
            }
            i=i+2;
        }
        return nums[n-1];
    }
};