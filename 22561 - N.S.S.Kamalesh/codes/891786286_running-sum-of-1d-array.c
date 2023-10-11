/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){
    *returnSize=numsSize;
    int *a=malloc(numsSize*sizeof(int));
    a[0]=nums[0];
    for(int i=1;i<numsSize;i++)
        a[i]=a[i-1]+nums[i];
        return a;
}