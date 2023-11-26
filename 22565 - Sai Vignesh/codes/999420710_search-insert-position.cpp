class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;
        while(j-i>1)
        {
            int mid = (i+j)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] > target) j = mid;
            else i=mid;
        }
        if(target <= nums[i])    return i;
        else 
        {
            if(target > nums[j]) return j+1;
            else return j;
        }
    }
};