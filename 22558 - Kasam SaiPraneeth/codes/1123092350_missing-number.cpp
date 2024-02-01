class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sumofN_number = (n*(n+1))/2;
        int missingnumber;
        for(int i = 0; i<n ; i++){
            sumofN_number -= nums[i];
        }
        return sumofN_number;
    }
};
