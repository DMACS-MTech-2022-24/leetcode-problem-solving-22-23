

int search(int* nums, int numsSize, int target){
    int l=0,r=numsSize-1;
    while(l<=r)
    {
        int m=((l+r)>>1);
        int val=nums[m];
        if(val==target)
        {
            return m;
        }
        else if(val>target)
        {
            r=m-1;
        }
        else
        {
            l=m+1;
        }
    }
    return -1;
}