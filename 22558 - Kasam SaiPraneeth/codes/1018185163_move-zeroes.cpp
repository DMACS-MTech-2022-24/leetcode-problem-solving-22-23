class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0, i, n =nums.size();
        // this is usefull for decting the not zero numbers and place them in the begining
        for(i =0; i<n; i++){
            if(nums[i] != 0 ){ // if num is not 0
                nums[j++] = nums[i]; // then num[i] is put in nums[j] and j is incremented
            }
        }
        
        // this is loop for placing the 0s at the end of the nums[j] vecor
        for(i = j; i<n; i++){
            nums[i] = 0;
        }
    }
};
