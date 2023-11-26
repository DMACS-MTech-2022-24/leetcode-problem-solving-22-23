class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size(),j=0;
        for(int i =0; i<n; i++){ // this loop are traversing the vector
            if(nums[i] != val){ // when ever the nums[i] !equal to the val
             nums[j++] = nums[i]; // put num[i] valu in nums[j] and increment the j
             }
        }
        // cout <<j<<endl;
        return j; // return the j
    }
};

