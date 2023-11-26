class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> ans1 ,ans2;
       for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) {//even
                ans1.push_back(nums[i]);
            } else {//odd
                ans2.push_back(nums[i]);
            }
        }
        //non-increasing odd indices
        sort(ans2.begin(),ans2.end(),greater<int>());
        //non-decreasing even indices
        sort(ans1.begin(),ans1.end());
        // Merge the sorted arrays back into nums
        int i = 0, j = 0;
        for (int k = 0; k < nums.size(); k++) {
            if (k % 2 == 0) {
                nums[k] = ans1[i++];
            } else {
                nums[k] = ans2[j++];
            }
        }
        return nums;
    }
};