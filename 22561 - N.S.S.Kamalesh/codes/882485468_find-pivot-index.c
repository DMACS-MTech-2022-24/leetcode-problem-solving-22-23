int pivotIndex(int* nums, int numsSize){
    int i,j,k;
    long int s,s1;
    for(i=0;i<numsSize;i++){
        s=s1=0;
        for(j=i-1;j>=0;j--)
            s+=nums[j];
        for(j=i+1;j<numsSize;j++)
            s1+=nums[j];
        if(s==s1)return i;
    }
    return -1;
}