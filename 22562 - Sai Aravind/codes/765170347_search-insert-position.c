

int searchInsert(int* nums, int numsSize, int target){
    int l=0;
    --numsSize;
    while(l<=numsSize)
    {
        int m=l+((numsSize-l)>>1);
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
    return l;
}