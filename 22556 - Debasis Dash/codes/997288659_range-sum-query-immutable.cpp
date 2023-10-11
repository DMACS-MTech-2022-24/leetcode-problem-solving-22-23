class NumArray {
    
    /*
        Time Complexity : O(N) + O(1)
        Space Complexity : O(N)
    */
    
private:
    vector<int> prefixSum;
    
public:
    NumArray(vector<int>& nums) {
        prefixSum.resize(nums.size());
        
        prefixSum[0] = nums[0];
        cout << prefixSum[0] << endl;
        for(int i=1; i<nums.size(); i++){
            prefixSum[i] = prefixSum[i-1] + nums[i];
            cout << prefixSum[i] << endl;
        }
    }
    
    int sumRange(int left, int right) {
        if(left == 0){
            return prefixSum[right];
        }
        
        return prefixSum[right] - prefixSum[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */