

void rotate(int* nums, int numsSize, int k){
    if(!k)
        return;
    k %= numsSize;
    int l1=0,l2=numsSize-k;
    int r1=l2,r2=numsSize;
    while(r1-l1>1 && r2-l2>1)
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
    if(r1-l1==1)
    {
        int x=nums[l1];
        for(;l2<r2;++l2)
            nums[l2-1]=nums[l2];
        nums[r2-1]=x;
    }
    else if(r2-l2)
    {
        int x=nums[l2];
        for(--r1;r1>=l1;--r1)
            nums[r1+1]=nums[r1];
        nums[l1]=x;
    }
}