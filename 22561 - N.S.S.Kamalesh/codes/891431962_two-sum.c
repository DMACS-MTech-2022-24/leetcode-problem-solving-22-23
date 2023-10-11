/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize=2;
    int *a=malloc(2*sizeof(int));
    int i,j;
    for(i=0;i<numsSize-1;i++)
            for(j=i+1;j<numsSize;j++)
                if(nums[i]+nums[j]==target){
                    a[0]=i;a[1]=j;
                    return a;
                }
    return;
}