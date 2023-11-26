class NumArray {
public:
    vector<int> nums;
    NumArray(vector<int>& nums) {
        // NumArray *numArray = new NumArray(nums);
        // for(int i=1;i<nums.size();i++)
        //     {   int left =nums[i][0];
        //         int right = nums[i][1];
        //         cout<<numArray->sumRange(left, right)<<endl;
        //     }
        this->nums = nums;
    }
    
    int sumRange(int left, int right) {
        int sum =0;
        for(int i=left;i<=right;i++){
            sum+=nums[i];
        }
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */