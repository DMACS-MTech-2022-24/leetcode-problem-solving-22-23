

void rotate(int* nums, int numsSize, int k){
    k %= numsSize;
    int l1=0,l2=numsSize-k;
    int r1=l2,r2=numsSize;
    while(r1-l1>0 && r2-l2>0)
    {
        int t;
        int i=l1,j=l2;
        int r = (r1-l1<r2-l2)?r1-l1:r2-l2;
        for(int i=0;i<r;++i)
        {
            t=nums[l1+i];
            nums[l1+i]=nums[l2+i];
            nums[l2+i]=t;
        }
        if(r1-l1 < r2-l2)
        {
            r1 += r;
            l1 += r;
            l2 += r;
        }
        else
        {
            l1 += r;
        }
    }
}