class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = *max_element(nums.begin(),nums.end());
        if(target > n)
            return nums.size();
        for(int i =0;i<nums.size();){
            if(nums[i]==target)
                return i;
            else if(target > nums[i] && target < nums[i+1])
                    return i+1;
            else
                i++;
        }
        return 0;
    }
    
};