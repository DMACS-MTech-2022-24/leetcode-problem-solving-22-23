class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int l = 0, r = n-1, index = n-1; 

        while(l <= r){
            int left = nums[l]*nums[l];
            int right = nums[r]*nums[r];

            if(left > right){
                ans[index--] = left;
                l++;
            }
            else{
                ans[index--] = right;
                r--;
            }
        }
        return ans;
    }
};