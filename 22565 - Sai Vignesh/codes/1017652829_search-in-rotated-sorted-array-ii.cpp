class Solution {
public:
    bool search(vector<int>& nums, int target) {
        // finding pivot for this case is useless, bound to get into error
        int mid,pivot,left=0,right=nums.size()-1;
        while(left<right)
        {
            mid = left+ (right-left)/2;
            cout<<left<<" "<<right<<" "<<mid<<endl;
            if(nums[mid] == target) return true;    // even if we remove this, pivot finding works
            
            if((nums[mid] == nums[right]) && (nums[mid] == nums[left]))
                {    ++left;--right;
                cout<<"case 1"<<endl; }
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
        if(nums[left] == target) return true;
        return false;

    }
};