class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int b=0;
        int a[]={nums[0],0};
        int c=nums[0];
        for(int i=1;i<nums.size();++i)
        {
            if(nums[i]>a[b])
            {
                if(b==1)
                    return true;
                a[++b]=nums[i];
            }
            else if(b==0 or nums[i]>a[b-1])
            {
                a[b]=nums[i];
            }
            else if(c<nums[i])
            {
                a[0]=c;
                a[1]=nums[i];
            }
            else
            {
                c=nums[i];
            }
        }
        return false;
    }
};