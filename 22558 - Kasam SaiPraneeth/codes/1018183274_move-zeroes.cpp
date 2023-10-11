class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0, i, n =nums.size();

        for(i =0; i<n; i++){
            if(nums[i] != 0 ){
                nums[j++] = nums[i];
            }
        }

        for(i = j; i<n; i++){
            nums[i] = 0;
        }
    }
};
