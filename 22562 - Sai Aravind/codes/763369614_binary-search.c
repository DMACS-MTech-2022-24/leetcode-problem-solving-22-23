

int search(int* nums, int numsSize, int target){
    int l=0;
    --numsSize;
    while(l<=numsSize)
    {
        int m=((l+numsSize)>>1);
        if(nums[m]==target)
        {
            return m;
        }
        else if(nums[m]>target)
        {
            numsSize=m-1;
        }
        else
        {
            l=m+1;
        }
    }
    return -1;
}