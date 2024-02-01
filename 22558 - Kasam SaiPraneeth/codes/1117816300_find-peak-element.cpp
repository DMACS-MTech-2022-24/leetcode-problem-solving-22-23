class Solution {
public:
    int findPeakElement(vector<int>& nums) {
    int n = nums.size();
    int l = 0, h = n-1,m =0;
    while(l < h){
        m = l + (h-l)/2;
        if(nums[m] < nums[m+1])
            l = m + 1;
        else
            h = m;
       }
       return l;
    }
};