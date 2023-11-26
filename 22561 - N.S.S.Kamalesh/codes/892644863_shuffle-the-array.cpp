class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        for(int i=n,j=1;i<(2*n);i++,j+=2){
            nums.insert(nums.begin()+j,nums[i]);
            nums.erase(nums.begin()+i+1);
        }
        return nums;
    }
};