

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize)
{
  int l1=0,r1=numsSize-1,l2,r2,m=(r1+l1)>>1;
  int *ret = malloc(sizeof(int)*2);
  *returnSize=2;
  for(;l1<r1;m=(r1+l1)>>1)
  {
    if(nums[m]==target)
    {
      break;
    }
    else if(nums[m]<target)
    {
      l1=m+1;
    }
    else
    {
      r1=m-1;
    }
    //printf("%d,%d,%d\n",r1,l1,m);
  }
  
  if(r1<l1 || nums[m]!=target)
  {
    ret[0]=ret[1]=-1;
    return ret;
  }
  else
  {
    r2=r1;
    r1=m;
    l2=m;
  }
  //printf("%d,%d,%d\n",r1,l1,m);
  for(m=(r1+l1)>>1;l1<r1;m=(r1+l1)>>1)
  {
    
    if(nums[m]==target)
    {
      if(m==0 || nums[m-1]<target) break;
      r1=m-1;
    }
    else if(nums[m]<target)
    {
      l1=m+1;
    }
  }
  ret[0]=(nums[m]==target && ( m==0 || nums[m-1]<target))?m:-1;
  //printf("%d,%d\n",l2,r2);
  for(m=(r2+l2)>>1;l2<r2;m=(r2+l2)>>1)
  {
    if(nums[m]==target)
    {
      //printf(": %d\t",m);
      if( m+1==numsSize || target < nums[m+1]) break;
      l2=m+1;
    }
    else if(target <nums[m])
    {
      r2=m-1;
    }
  }
  ret[1]=(nums[m]==target && ( m+1==numsSize || target < nums[m+1]))?m:-1;
  //printf("%d\n",m);
  return ret;
}