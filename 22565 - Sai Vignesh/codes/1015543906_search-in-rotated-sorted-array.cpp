class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1,mid,piv;
        
        while(l<r)
        {
            mid = (l+r)/2;
            if(nums[mid] == target) return mid;
            if(nums[mid] > nums[r]) l = mid+1;
            else r=mid;
        }
        // cout<<l;
        piv = l; l=0;r=nums.size()-1;
        // return -1;
        while(l<r)
        {
            mid = (l+r)/2;

            if(nums[mid] == target) return mid;
            if(mid<piv)
            {
                if(nums[l]<=target && nums[mid]>target) r = mid;
                else l = mid+1;
            }
            else
            {
                    if(nums[r]>=target && nums[mid]<target) l=mid+1;
                    else r = mid-1;
            }
        }
        if(nums[l] == target)   return l;
        return -1;

        
    }
};