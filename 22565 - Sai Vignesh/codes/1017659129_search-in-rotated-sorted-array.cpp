class Solution {
public:
    int search(vector<int>& nums, int target) {
        int mid,pivot,left=0,right=nums.size()-1;
        while(left<right)
        {
            mid = left+ (right-left)/2;
            if(nums[mid] == target) return mid;    
            if((nums[mid] == nums[right]) && (nums[mid] == nums[left]))
                {    ++left;--right; }
            else if(nums[left]<=nums[mid]){
                if(nums[left]<=target && nums[mid]>target) right = mid-1;
                else left = mid+1;
            }
            else
            {
                if(nums[right]>=target && nums[mid]<target) left=mid+1;
                    else right = mid-1;
            } 

        }
        // cout<<left<<" "<<right<<" "<<mid<<endl;
        if(nums[left] == target) return left;
        return -1;
        
    }
};