class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        // while(i<n){
        //     cout<<nums[i]<<endl;
        //     i++;
        // }
        // return 0;
        // for(int i=1; i<nums.size();){
        //     if(nums[i] == nums[i-1])
        //         nums.erase(nums.begin()+i);
        //         // nums.erase(nums.bi)
        //     else
        //         i++;
        // }
        // int j=0;
        // while(j<nums.size()){
        //     cout<<nums[j]<<endl;
        //     j++;
        // }
        int n = nums.size();
        return nums[n-k];
    }
};